#include <stdio.h>
#include <string.h>
struct Emp {
 char empName[30];
 int empId;
};
int main() {
 FILE *fp;
 struct Employee emp[3];
 int i; 
 for (i = 0; i < 3; i++) {
 printf("Enter Emp Name: ");
 scanf("%s", emp[i].emplyeeName);
 printf("Enter Emp ID: ");
scanf("%d", &emp[i].empId);
 } 
 fp = fopen("employee.txt", "w");
 for (i = 0; i < 3; i++) {
 fprintf(fp, "Emp Name: %s\n", emp[i].emplyeeName);
 fprintf(fp, "Emp ID: %d\n", emp[i].empId);
 }
 fclose(fp); 
 fp = fopen("employee.txt", "r");
 for (i = 0; i < 3; i++) {
 fscanf(fp, "Emp Name: %s\n", emp[i].empName);
 fscanf(fp, "Emp ID: %d\n", &emp[i].empId);
 }
 fclose(fp);
 for (i = 0; i < 3; i++) {
 printf("Emp Name: %s\n", emp[i].empName);
 printf("Emp ID: %d\n", emp[i].empId);
  }
 return 0;
}



