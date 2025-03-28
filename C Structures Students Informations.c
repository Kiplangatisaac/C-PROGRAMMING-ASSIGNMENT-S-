//c structures
#include <stdio.h> //scanf(), printf()
#include <string.h> //strcpy()
struct Student{
char name [14];
float height;
char reg_no[20];
char email [30];
int phone;
} student1, student2;

int main(){
//struct Student studenti, student2;
// strcpy(student1.name, "Isaac Rotich");
printf("Enter your name: ");
scanf("%s", &student1.name);
student1.height = 5.7;
strcpy(student1.reg_no, "CT101/G/25159/24");
strcpy(student1.email, "isaacrotich573@gmailcom");
student1.phone = 729050932;

printf("Name: %s \n", student1.name);

printf("Height: %f \n", student1.height);
printf("Reg Number: %s \n", student1.reg_no);
printf("Email: %s \n", student1.email);
printf("Phone number: %d \n", student1.phone);

return 0;
}