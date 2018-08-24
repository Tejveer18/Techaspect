#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
    char branch[5];
    int year;
    int sem;
    float prev_sem_per;
};

int main()
{
    struct student s[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter Student %d details,\n",i+1);
        printf("Student's name : ");
        scanf("%s",&s[i].name);
        printf("Age : ");
        scanf("%d",&s[i].age);
        printf("Branch : ");
        scanf("%s",&s[i].branch);
        printf("Year-Sem : ");
        scanf("%d-%d",&s[i].year,&s[i].sem);
        printf("Previous Semester Percentage : ");
        scanf("%f",&s[i].prev_sem_per);
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
	printf("-List of all the students-\n");
	printf("The student %d details are as follows,\n",i+1);
	printf("Name : %s\nAge : %d\nBranch : %s\nYear-Sem : %d-%d\nPrevious Semester Percentage : %d\n",s[i].name,s[i].age,s[i].branch,s[i].year,s[i].sem,s[i].prev_sem_per);
    }
    for(i=0;i<10;i++)
    {
	//condition to be entered like here we consider students having less than 60%
	if(s[i].prev_sem_per<60)
	{
	     printf("Student %d whose name is %s has less than 60%",i+1,s[i].name);
	}
    return 0;
}

