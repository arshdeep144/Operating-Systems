#include <stdio.h>
#include <stdlib.h>

struct student{
    int studentID;
    int age;
    int year;
};

void save_student(struct student stu);

int main(void){
    struct student stu;
    printf("Enter Student ID: ");
	scanf("%d", &stu.studentID);
    printf("Enter Student Age: ");
	scanf("%d", &stu.age);
    printf("Enter Year of Enrollment: ");
	scanf("%d", &stu.year);
	save_student(stu);
	return 0;
}

void save_student(struct student stu){
    FILE *log = NULL;
    log = fopen("student.txt","a"); 
    fprintf(log, "%d, %d, %d", stu.studentID, stu.age, stu.year);
    fclose(log);
}