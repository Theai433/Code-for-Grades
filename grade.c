//Grade determination 
#include <stdio.h>

int main() {
    int maths, English, biology, average;
    printf("Enter marks for maths, English, biology");
    scanf("%d %d %d",&maths,& English,& biology);
    average=(maths+English+biology)/3;
    if (average>=70 && average<=100) 
    printf("Grade is A");
    else if(average >=60 && average<=69)
    printf("grade is B");
    else if(average>=50 && average<=59)
    printf("grade is C");
     else if(average>=40 && average<=49)
    printf("grade is D");
     else if(average>=30 && average <=39)
    printf("grade if E");
    else if(average<=0)
printf("Fail");
    return 0;
}