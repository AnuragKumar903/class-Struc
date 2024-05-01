#include <stdio.h>
#include <stdlib.h>

struct student{
  char name[25];
  int roll_no;
  float marks;
}typedef student;

int main(void) {
  student s1;
  
  strcpy(s1.name, "Anurag");
  s1.roll_no = 53;
  s1.marks = 99.9;
  printf("Name: %s\n", s1.name);
  printf("Roll No: %d\n", s1.roll_no);
  printf("Marks: %f\n", s1.marks);

  int n;
  scanf("%d", &n);
  student *s = (student*)malloc(n*sizeof(student));
  for(int i=0; i<n; i++){
    printf("Enter name: ");
    scanf("%s", s[i].name);
    printf("Enter roll no: ");
    scanf("%d", &s[i].roll_no);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
  }
  for(int i=0; i<n; i++){
    printf("Name: %s\n", s[i].name);
    printf("Roll No: %d\n", s[i].roll_no);
    printf("Marks: %f\n", s[i].marks);
  }
  
  return 0;
}