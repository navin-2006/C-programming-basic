#include<stdio.h>
int main()
{
    int BP;
    float B,TA,NS;
    printf("Enter The Basic Pay");
    scanf("%d",&BP);
    if(BP>0 && BP<=10000)
    {
        B=BP*(2/100.0);
        TA=BP*(1/100.0);
    printf("Bonus=%.2f\nTravel Allowance=%.2f",B,TA);
    NS=BP+B+TA;
    printf("\nNet Salary=%.2f",NS);
    }
    
    else if(BP>10000 && BP<=25000)
    {
        B=BP*(5/100.0);
        TA=BP*(2/100.0);
    printf("Bonus=%.2f\nTravel Allowance=%.2f",B,TA);
    NS=BP+B+TA;
    printf("\nNet Salary=%.2f",NS);
    }
    
    else if(BP>25000 && BP<=50000)
    {
        B=BP*(10/100.0);
        TA=BP*(3/100.0);
    printf("Bonus=%.2f\nTravel Allowance=%.2f",B,TA);
    NS=BP+B+TA;
    printf("\nNet Salary=%.2f",NS);
    }
    
    else if(BP>50000 && BP<=100000)
    {
        B=BP*(15/100.0);
        TA=BP*(5/100.0);
    printf("Bonus=%.2f\nTravel Allowance=%.2f",B,TA);
    NS=BP+B+TA;
    printf("\nNet Salary=%.2f",NS);
    }
    
    else if(BP>100000)
    {
        B=BP*(20/100.0);
        TA=BP*(5/100.0);
    printf("Bonus=%.2f\nTravel Allowance=%.2f",B,TA);
    NS=BP+B+TA;
    printf("\nNet Salary=%.2f",NS);
    }
    
    else if(BP<0)
    {
        printf("INVALID Basic Pay");
    }
   
}
