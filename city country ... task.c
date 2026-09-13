#include <stdio.h>
int main(){
int city;
int country;
float Area;
int Population;
int grade;
printf("What city you live in?\n1. Karachi\n2. Islamabad\n3. Lahore\n");
scanf("%d", &city);
switch (city){
    case 1 : printf("You live in karachi, Pakistan\n");
    break;
    case 2 : printf("You live in Islamabad, Pakistan\n");
    break;
    case 3 : printf("You Live in Lahore, Pakistan\n");
    break;
    default : printf("Please enter correct number\n");
    return 0;
}
//POPULATION
    printf("Enter the population of your city\n");
    scanf("%d", &Population);
    printf("population of your city : %d\n",Population);

//AREA
printf("Enter the area of your city in sqft\n");
scanf("%f", &Area);
printf("area of your city : %.2f\n",Area);

//GRADE
if (Population>=10000000) {
    printf("Your city is Metropolitan city\nGrade : A\n");
}else if (Population>=1000000) {
    printf("Your city is Mordern city\nGrade : B\n");
}else if (Population>=10000){
    printf("Your city is a Country side\nGrade : C\n");
} else{
    printf("You live in a Rural city\nGrade : D\n");
}
return 0;
}


    

