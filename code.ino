#include<stdio.h>
int main()
{
    FILE *fp;
    
    float weight,height,bmi;
    int age;
    char goal;
    
    printf("Enter the weight in KG: ");
    scanf(" %f",&weight);
    printf("Enter the height in meter:");
    scanf(" %f",&height);
    
    printf("Enter your age: ");
    scanf(" %d",&age);
    
    printf("GOAL - lose(L)/Maintain(M)/Gain(G) : ");
    scanf(" %c", &goal);
    
    bmi = weight/(height * height);
    printf(" BMI = %.2f\n ",bmi);
    
    if (bmi < 18.5 || goal == 'G'|| goal == 'g')
    {
       printf("Underweight\n");
       printf("Recommended diet: high protein , High calorie surplus (2800 kcal /day\n)");
    }
    
    
    else if (bmi < 25 || goal == 'M'|| goal == 'm')
    {
     printf("Normal\n");
     printf("Recommended diet: Balanced Macros (2400 kcal/day\n)");
    }
    
    else  if (bmi < 30 || goal == 'L' || goal == 'l')
    {
      printf("Overweight\n");
      printf("Recommended diet: high protein , low calorie surplus (1800 kcal/day\n)");
    }
    
    else
    {
     printf("invalid goal entered.\n");
    }
    
    fp = fopen("diet_data.txt","a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp,"Age: %d,Weight: %.2f,Height: %.2f,BMI: %.2f,GOAL: %c\n",age,weight,height,bmi,goal );
    fclose(fp);
    printf("\nData saved to diet_data.txt Successfully!");
    
    
    return 0;
}
