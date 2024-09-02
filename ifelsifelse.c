#include <stdio.h>

int main() {
	
    int grade;

    /* Enter the grade */
    printf("Enter a grade: ");
    scanf("%d", &grade);

    if (grade >= 96 && grade <= 100) 
	{
        printf("\nOutstanding");
    } 
    
	else if (grade >= 91 && grade <= 95) 
	{
        printf("\nVery Satisfactory");
    }
	 
	else if (grade >= 86 && grade <= 90) 
	{
        printf("\nSatisfactory");
    }
	 
	else if (grade >= 81 && grade <= 85) 
	{
        printf("\nGood");
    } 
	else 
	{
        printf("\nGrade is not within the specified range (81-100)");
    }

    return 0;
}
