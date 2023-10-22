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

    month = retirementyear * 12;

    ajdustinflationRetrunRate = ((1 + annualReturn)/(1 + annualInflation)) - 1;
    printf("|month|\t|Interest  |\t|Balance   |\n");

    for(int i = 1; i<=month; i++){
        interest = (ajdustinflationRetrunRate * intilaAmount)/12;
        intilaAmount += interest + mothlycontributionAmount;
         totalInterestEarned = totalInterestEarned + interest;
         printf("%5i\t$ %10.2f\t & %10.2f  \n",i,interest,intilaAmount);
    } 
    printf("---------------------\n");
    printf("Total interest Earned = $ %f\n",totalInterestEarned);
    printf("Total nest Egg: $ %f\n",intilaAmount);

    return 0;
}