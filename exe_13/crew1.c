#include<stdio.h>
#include<string.h>
struct CREW{
    int crewID;
    char name[20];
    int age;
    char grade;
    float salary;
};
int main(){
    char abcd[10];
    char grd;
    int id;
    struct CREW crew[5];
    int i;
    for(i=0;i<2;i++){
    printf("enter the ID: ");
    scanf("%d",&crew[i].crewID);
    printf("enter the name: ");
    scanf("%s",crew[i].name);
    printf("enter the age: ");
    scanf("%d",&crew[i].age);
    printf("enter the grade: ");
    scanf(" %c",&crew[i].grade);
    printf("enter the salary: ");
    scanf("%f",&crew[i].salary);
}
    for(i=0;i<2;i++){ //print crew database
       
        printf("id= %d\t",crew[i].crewID);
        printf("name= %s\t",crew[i].name);
        printf("age= %d\t",crew[i].age);
        printf("grade= %c\t",crew[i].grade);
        printf("salary= %0.2f\n",crew[i].salary);
    }
    for(i=0;i<2;i++){
        if(crew[i].salary>15000) //print more than 15
        {
        printf("id= %d\t",crew[i].crewID);
        printf("name= %s\t",crew[i].name);
        printf("age= %d\t",crew[i].age);
        printf("grade= %c\t",crew[i].grade);
        printf("salary= %f\t",crew[i].salary);
        }
    }
    
    printf("Enter the grade :"); //search name in grade
    scanf(" %c",&grd);
    for(i=0;i<2;i++){
        if(crew[i].grade == grd)
        {
            printf("name : %s\n",crew[i].name);
        }
    }
    printf("Enter the name: "); //increment salary
    scanf("%s",abcd);
    for(i=0;i<2;i++){
        if(strcmp(abcd,crew[i].name)==0)
        {
        crew[i].salary+=5000;
            printf("After increment %s's salary : %f",crew[i].name,crew[i].salary);
        }
    }
	printf("Enter the crewID :"); //delete data crewid
    scanf("%d",&id);
    for(i=0;i<2;i++){
        if(crew[i].crewID == id)
        {
            crew[i].crewID=0;
	strcpy(crew[i].name,"");
	crew[i].age=0;
	crew[i].grade=0;
	crew[i].salary=0;
		
        }
        for(i=0;i<2;i++){ //display
       
        printf("id= %d\t",crew[i].crewID);
        printf("name= %s\t",crew[i].name);
        printf("age= %d\t",crew[i].age);
        printf("grade= %c\t",crew[i].grade);
        printf("salary= %0.2f\n",crew[i].salary);
    }
}
