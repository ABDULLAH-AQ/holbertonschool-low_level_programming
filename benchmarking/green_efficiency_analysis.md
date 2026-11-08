# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu11` and timed using `clock()` from `<time.h>`. `clock()` measures the CPU time used by the process, and the difference between two calls was converted to seconds by dividing by `CLOCKS_PER_SEC`.

Three experiments were run. `baseline_loop.c` (100,000,000 iterations) was executed three consecutive times to observe timing variability. `comparison_algorithms.c` was executed three times, timing a naive algorithm and a single-pass algorithm separately. `instrumentation_lab.c` was split into three phases (build, process, reduce), each timed by placing `clock()` calls directly before and after its function call. A TOTAL timer wrapped all three phases. All printing was done after the timed regions so that I/O would not affect the measurements.

## Observed Performance Differences

The baseline loop recorded 0.199251, 0.119930 and 0.183200 seconds, an average of about 0.167 seconds. The same code with the same input varied by about 0.079 seconds between the fastest and slowest run, which shows that a single measurement is not reliable on its own.

The algorithm comparison showed the largest difference. The naive algorithm took 1.915358, 1.844346 and 1.913780 seconds (average about 1.891 seconds). The single-pass algorithm took 0.000070, 0.000060 and 0.000070 seconds (average about 0.000067 seconds). Based on these averages, the naive version used roughly 28,000 times more CPU time. This gap was consistent across all three runs, so it reflects the algorithm, not random variation.

In the instrumentation lab, the measured times were TOTAL 0.001024, BUILD_DATA 0.000284, PROCESS 0.000480 and REDUCE 0.000256 seconds. PROCESS was the most expensive phase at about 47% of the total. The three phases add up to 0.001020 seconds, only 0.000004 seconds less than TOTAL, which matches the small overhead of the extra `clock()` calls between phases.

## Relation Between Runtime and Energy Consumption

Energy was not measured directly in these experiments. However, a CPU draws power while it executes instructions, so CPU time can be used as a rough indicator of energy use, assuming the processor's power draw stays similar during the runs. Under that assumption, the naive algorithm's roughly 1.9 seconds of CPU time per run represents far more energy than the single-pass algorithm's 0.00007 seconds. The difference between these two approaches is much larger than any savings available from small optimizations like those measured in the instrumentation lab, where the whole program ran in about one millisecond.

## Limitations of the Experiment

- Only three runs were recorded for the baseline and comparison programs, and only one run for the instrumentation lab. More runs would give a more reliable average.
- The baseline times varied by about 0.079 seconds, which shows that background system activity affects results.
- The instrumentation lab phases took fractions of a millisecond, which is close to the resolution limit of `clock()`, so those values are less precise.
- Energy consumption was estimated from CPU time and not measured with a power meter.
- All tests were run on one machine, so the absolute times may differ on other hardware.

## Practical Engineering Takeaway

The choice of algorithm had the biggest impact on performance. Replacing the naive algorithm with a single-pass version reduced CPU time from about 1.9 seconds to about 0.00007 seconds, while timing variation between identical runs was much smaller in comparison. Before optimizing small details, engineers should measure where time is actually spent, as the instrumentation lab did by showing PROCESS as the largest phase, and focus first on reducing the amount of work the algorithm does. Lower CPU time means less energy used, especially for code that runs many times.
