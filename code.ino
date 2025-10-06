#include<stdio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter the weight in KG: ");
    scanf("%f",&weight);
    printf("Enter the height in meter:");
    scanf("%f",&height);
    
    bmi = weight/(height * height);
    printf(" BMI = %.2f\n ",bmi);
    
    if(bmi < 18.5 )
    printf("Underweight\n");
    
    else if(bmi < 25 )
    printf("Normal\n");
    
    else if(bmi < 30)
    printf("Overweight\n");
    
    else
    printf("obese\n");
    
    return 0;
}
