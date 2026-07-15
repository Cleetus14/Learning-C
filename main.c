#include <stdio.h>

int main()
{
	float balance = 1000.00;
	char option;
	float amountToDeposit = 0;
	float amountToWithdraw = 0;
	float newBalance = 0;
	int pin = 1234;

	printf("Enter your pin to access your bank account: ");
	scanf_s("%d", &pin);

	if (pin == 1234)
	{
		printf("===== Bank Account =====\n");
		printf("1. Check Balance\n");
		printf("2. Deposit Money\n");
		printf("3. Withdraw Money\n");
		printf("4. Exit\n");

		printf("Choose an option: \n");
		scanf_s(" %c", &option, 1);
	}
	else
	{
		printf("Wrong Pin!\n");
		printf("Try Again!\n");
		return 1;
	}

	switch (option)
	{
	case '1':
		printf("Your current balance is: $%.2f", balance);
		break;

	case '2':
		printf("Enter an amount to deposit: $");
		scanf_s("%f", &amountToDeposit);

		if (amountToDeposit <= 0)
		{
			printf("Invalid amount.");
		}
		else {
			newBalance = balance + amountToDeposit;
			printf("New Balance: $%.2f", newBalance);
			break;
		}

	case '3':
		printf("Enter amount to withdraw: $");
		scanf_s("%f", &amountToWithdraw);
		if (amountToWithdraw > balance)
		{
			printf("Insufficient funds.");
		}
		else if (amountToWithdraw <= balance)
		{
			newBalance = balance - amountToWithdraw;
			printf("New Balance: $%.2f", newBalance);
			break;
		}
	case '4':
		printf("Thank you for using the bank simulator. Have a good day!");
		break;
	
	default:
		printf("Invalid option.");
	}

	return 0;
}