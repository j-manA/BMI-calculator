//This program calculates your Body Mass Index and tells you whether you are under weight, overweight or just fine.

#include <stdio.h>
#include <conio.h>

int main()
{
	float weight, height, BMI;
	//weight
	printf("BMI program\n\n");
	printf("please enter your weight in kg: \n",&weight);
	scanf("%f",&weight);
	//height
	printf("please enter your height in meters: \n ",&height);
	scanf("%f",&height);
	//bmi
	BMI = weight/(height*height);
	printf("your BMI is %f\n", BMI);
	if(BMI <= 18.0)
	printf("you are underweight");
	else if(BMI >= 25.9)
	printf("you are overweight");
	else
	printf("you are ok");
	getch();
	
	
	
}

