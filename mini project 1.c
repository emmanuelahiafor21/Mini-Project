#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int marks;
printf("Enter student's marks: ");

    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Marks must be between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }	
	
	
	
	
	
	 
	
	
	

	
	
	
	
	
	
	
	




	
return 0;
}
