#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char name[], address[], acc_type[];
int phone;
char actual_password[8], deposited_password[8];
int account_balance = 0, deposited_value, temp_value, transaction_history;
int fp_input, am_input, tm_input, um_input, r_input;
int create_Account, disp_details, update_details, delete_Account, loop_value = 0, accountcreatedflag = 0;
int number, lower = 11111111, upper = 999999999;

// Main menu
void acc_mngmnt()
{
    printf("\n[1]\tCreate new account");
    printf("\n[2]\tDisplay account details");
    printf("\n[3]\tUpdate account details");
    printf("\n[4]\t Delete accounts");
    printf("\n[5]\t Back\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &am_input);
}

void transaction_mngmnt()
{
    printf("\n[1]\t Deposit money");
    printf("\n[2]\t Withdraw money");
    printf("\n[3]\t Display transaction history");
    printf("\n[4]\t Back\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &tm_input);
}

void user_mngnmt()
{
    printf("\n[1]\tCreate a new user");
    printf("\n[2]\tLogin");
    printf("\n[3]\tLogout");
    printf("\n[4]\tPassword Management");
    printf("\n[5]\t Back\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &um_input);
}

void reporting()
{
    printf("\n[1]\tGenerate Account Statements");
    printf("\n[2]\tDisplay Account Balances");
    printf("\n[3]\tShow Transaction Summaries");
    printf("\n[4]\t Back\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &r_input);
}

// Account Management
void createAccount()
{
    //acccreatedalready();
    printf("\n\n");
    printf("\n\tEnter your details");
    printf("\n\n\tFull Name: ");
    scanf("%s", name);
    printf("\n\tPhone Number: ");
    scanf("%d", &phone);
    printf("\n\tAddress: ");
    scanf("%s", &address);
    printf("\n\tAccount type Saving or Current: ");
    scanf("%s", &acc_type);
    printf("\n\tCreate A New Password: ");
    scanf("%s", &actual_password);

    if (name == NULL)
    {
        printf("\nPlease enter your name!\n");
    }
    else if (phone == NULL)
    {
        printf("\nPlease enter your contact number!\n");
    }
    else if (address == NULL)
    {
        printf("\nPlease enter your Address!\n");
    }
    else
    {
        printf("\nAccount Created Succesfully\n");
        printf("\n\tYour Account Number is: %d", number);
        //accountcreatedflag++;
    }
}

int rand_acc()
{
    srand(time(NULL));

    number = (rand() % (upper - lower + 1)) + lower;
    return 0;
}

/*int acccreatedalready()
{
    printf("\nAccount already exists!");
    if (accountcreatedflag > 0)
    {
        exit;
    }
    else
    {
        accountcreatedflag == 0;
    }
    return 0;
}
*/
void show_acc_details()
{
    printf("\n\tAccount holder's name: %s", name);
}


void dispAccountdetails()
{

    printf("\n[1]\tAccount details");
    printf("\n[2]\tAccount Number");
    printf("\n[3]\tAccount Balance");
    printf("\n\nEnter your option: ");
    scanf("%d", &disp_details);

    if (disp_details == 1)
    {
        show_acc_details();
    }
    else if(disp_details == 2)
    {
        printf("\n\tAccount Number: %d", number);
    }
    else if (disp_details == 3)
    {
        printf("\n\tAccount Balance: %d$\n", account_balance);
    }
    else
    {
        printf("\nEnter valid option");
    }
}


void updateAccount()
{
    printf("\n[1]\tUpdate Account Details\n");

    if (update_details == 1)
    {
        printf("\n\tUpdate your details");
        printf("\n\n\tFull Name: ");
        scanf("%s", name);
        printf("\n\tPhone Number: ");
        scanf("%d", &phone);
        printf("\n\tAddress: ");
        scanf("%s", &address);

        if (name == NULL)
    {
        printf("\nPlease update your name!\n");
    }
    else if (phone == NULL)
    {
        printf("\nPlease update your contact number!\n");
    }
    else if (address == NULL)
    {
        printf("\nPlease update your Address!\n");
    }
    }
    else if (disp_details == 2)
    {
        printf("\n\tAccount Balance: %d$\n", account_balance);
    }
    else
    {
        printf("\nEnter valid option");
    }
}

void deleteAccount()
{
    printf("\n[1]\tSelect Account\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &delete_Account);
}

// Transaction Management

void deposit()
{
    printf("\n\tEnter amount to be deposited: ");
    scanf("%d", &temp_value);
    printf("\n\tEnter your password");
    scanf("%d", &deposited_password);

    if (actual_password == deposited_password)
    {
        temp_value == account_balance;
        // transaction_history =
    }
    else
    {
        printf("\nIncorrect Password!");
    }
}

void Withdraw()
{
    printf("\n\tEnter amount to be withdraw: ");
    scanf("%d", &temp_value);
    printf("\n\tEnter your password");
    scanf("%d", &deposited_password);

    if (actual_password == deposited_password)
    {
        temp_value == deposited_value;
    }
    else
    {
        printf("\nIncorrect Password!");
    }
}

void home()
{
    printf("        BANK MANAGEMENT SYSTEM            \n");
    printf("\n      ------  Main Menu  ------                  \n");
    printf("\n[1]\t Account Management");
    printf("\n[2]\t Transaction Management");
    printf("\n[3]\t User Management");
    printf("\n[4]\t Reporting");
    printf("\n[5]\t exit\n");
    printf("\n\nEnter your option: ");
    scanf("%d", &fp_input);
}

int main()
{
    home();
    if (fp_input == 1)
    {
        acc_mngmnt();
    }
    else if (fp_input == 2)
    {
        transaction_mngmnt();
    }
    else if (fp_input == 3)
    {
        user_mngnmt();
    }
    else if (fp_input == 4)
    {
        reporting();
    }
    else if (fp_input == 5)
    {
        exit;
    }
    else
    {
        printf("\nEnter valid option!");
    }

    // Account Management
    if (am_input == 1)
    {
        acccreatedalready();
    }
    else if (am_input == 2)
    {
        dispAccountdetails();
    }
    else if (am_input == 3)
    {
        updateAccount();
    }
    else if (am_input == 4)
    {
        deleteAccount();
    }
    else if (am_input == 5)
    {
        home();
    }
    else
    {
        printf("\nEnter valid option!");
    }

    // Transaction Management
    /*if (am_input == 1)
    {
        createAccount();
    }
    else if (am_input == 2)
    {
        dispAccountdetails();
    }
    else if (am_input == 3)
    {
        updateAccount();
    }
    else if (am_input == 4)
    {
        deleteAccount();
    }
    else if (am_input == 5)
    {
        home();
    }
    else
    {
        printf("\nEnter valid option!");
    }

    //User Management
    if (am_input == 1)
    {
        createAccount();
    }
    else if (am_input == 2)
    {
        dispAccountdetails();
    }
    else if (am_input == 3)
    {
        updateAccount();
    }
    else if (am_input == 4)
    {
        deleteAccount();
    }
    else if (am_input == 5)
    {
        home();
    }
    else
    {
        printf("\nEnter valid option!");
    }

    //reporting
     if (am_input == 1)
    {
        createAccount();
    }
    else if (am_input == 2)
    {
        dispAccountdetails();
    }
    else if (am_input == 3)
    {
        updateAccount();
    }
    else if (am_input == 4)
    {
        deleteAccount();
    }
    else if (am_input == 5)
    {
        home();
    }
    else
    {
        printf("\nEnter valid option!");
    }
*/
    return 0;
}