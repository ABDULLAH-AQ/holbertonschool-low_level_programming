#include <stdio.h>

/**
 * menu - Displays the menu and reads the user's choice
 *
 * Return: The number the user entered
 */

int menu(void)
{
    int choice;

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Quit\n");
    printf("Choice: ");
    scanf("%d", &choice);

    return choice;
}

int main(void)
{
    int choice;
    double num1, num2, result;

    while (1)
    {
	choice = menu();

	if (choice == 5)
	{
	    printf("bye!\n");
	    break;
	}

	printf("A: ");
	scanf("%lf", &num1);
	printf("B: ");
	scanf("%lf", &num2);

	switch (choice)
	{
	    case 1:
		result = num1 + num2;
		printf("Result: %.2f\n", result);
		break;
	    case 2:
		result = num1 - num2;
		printf("Result: %.2f\n", result);
		break;
	    case 3:
		result = num1 * num2;
		printf("Result: %.2f\n", result);
		break;
	    case 4:
		if (num2 != 0)
		{
		    result = num1 / num2;
		    printf("Result: %.2f\n", result);
		}
		else
		{
		    printf("Error: Division by zero is not allowed.\n");
		}
		break;
	    default:
		printf("Invalid choice.\n");
	}
    }

    return 0;
}
