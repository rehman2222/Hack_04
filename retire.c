//The prgram about 401(k) plan is a account for people to save money for retirement

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    float intilaAmount, mothlycontributionAmount, annualReturn, annualInflation, balance;
    float  interest, ajdustinflationRetrunRate, totalInterestEarned = 0;
    int retirementyear, month; 

    printf("Enter the initial Amount: ");
    scanf("%f",&intilaAmount);
    printf("How much money you can add on monthly base(monthly amount same over life of saving:  )");
    scanf("%f",&mothlycontributionAmount);
    printf("Average annual rate of return(on scale 0,1): ");
    scanf("%f",&annualReturn);
    printf("Average rate of inflation(on scale 0,1):");
    scanf("%f",&annualInflation);
    printf("Enter a number of year until retirment: ");
    scanf("%i",&retirementyear);

    
}