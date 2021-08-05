#include <stdio.h>
#include <conio.h>
/*Creating & Writing Data On File */
/*
void main()
{



    FILE *fptr;
    char name[20];
    int age;
    int salary;
    fptr = fopen("D:\\emp.txt","w");
    if(fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("Enter Your Name \n");
    gets(name);
    fprintf(fptr,"Name = %s\n",name);

    printf("Enter the age \n");
    scanf("%d",&age);
    fprintf(fptr,"Age = %d\n",age);

    printf("Enter the Salary \n");
    scanf("%d",&salary);
    fprintf(fptr,"Salary = %d\n",salary);

    fclose(fptr);
}
*/

/* Reading a File*/
/*
void main(){
    FILE *fptr;
    fptr =fopen("D:\\emp.txt","r");

    char singleLine[150];

    while(!feof(fptr)){
        fgets(singleLine,150,fptr);
        puts(singleLine);
    }
    fclose(fptr);
}
*/
/* Appending a File */
/*
void main(){
    FILE *fptr;
    char name[20];
    int stuid;
    int age;
    int salary;
    int stu;
    fptr =fopen("D:\\emp.txt","a");
    printf("Mention Number Students");
    scanf("%d",&stu);
    for(int counter =1;counter <= stu;counter++)
    {
        printf("Enter Student Id \n");
        scanf("%d",&stuid);
        printf("Enter the age \n");
        scanf("%d",&age);
        printf("Enter the Salary \n");
        scanf("%d",&salary);
        fprintf(fptr,"Student Id %d\n",stuid);
        fprintf(fptr,"Age = %d\n",age);
        fprintf(fptr,"Salary = %d\n\n",salary);
    }
    fclose(fptr);
}

*/
