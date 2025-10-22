/*
 * Copyright 2025 Eluri Anil Charles
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
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
    
    else  if (bmi ≥ 30 || goal == 'L' || goal == 'l')
    {
      printf("Overweight\n");
      printf("Recommended diet: high protein , low calorie surplus (1800 kcal/day\n)");
    }
    
    else
    {
     printf("invalid goal entered.\n");
    }
    
    fp = fopen("diet_data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Age: %d, Weight: %.2f. kg,Height: %.2f m, BMI: %.2f, Goal: %c",age, weight, height, bmi, goal);
    fclose(fp);
    printf("Data saved to diet_data.txt     successfully.");

    return 0;
}