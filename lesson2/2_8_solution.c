# include <stdio.h>

void clearStdinBuffer() 
{
    // Purges stdin, discards previous input from code above to allow us to
    // use fgets properly. 
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // searches for new-line character and stops at the end of file. 
}

int main(int argc, char* argv) 
{
    // initialize/declared necessary variables
    float loan_amount, interest_rate, monthly_payment; 

    // constants label, prevents re-assignment. Makes code readable. 
    const int MONTHS_IN_A_YEAR = 12;
    const int NUMBER_OF_SPECIFIED_PAYMENTS = 5; 

    /*
        Gathering of user input/data. 
    */
    printf("Enter amount of loan: "); 
    scanf("%f", &loan_amount); 
    clearStdinBuffer(); 

    printf("Enter interest rate: "); 
    scanf("%f", &interest_rate); 
    interest_rate = interest_rate / 100; // note that we're looking for a percentage, clean-up of user input. 
    clearStdinBuffer(); 

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment); 
    clearStdinBuffer(); 

    float monthly_interest = interest_rate / MONTHS_IN_A_YEAR; // in the hint, gave us the clue to find the monthly interest rate using the overall interest rate. 

    /*
        Calculate and display to console. 
    */
    for(int i = 0; i < NUMBER_OF_SPECIFIED_PAYMENTS; i++) 
    {
        float interest = loan_amount * monthly_interest; // calculates interest gained for that month. 
        loan_amount = (loan_amount + interest) - monthly_payment; // directly applies payment with interest into consideration and reconfigure loan amount after monthly payment. 
        printf("Balance remaining after payment #%d: %.2f\n", i + 1, loan_amount);  // display.
    } 

    return 0; 
}