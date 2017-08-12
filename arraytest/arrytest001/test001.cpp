#include <STDIO.H>
#include <IOSTREAM.H>
struct student
{
	char name[20];
	char number[20];
	char sex[20];
};
int main()
{
	student stu[3];
	int max;
	printf("please enter the number of data\n");
	scanf("%d",&max);
	for (int i=0;i<max;i++)
	{
		printf("please enter name\n");
		scanf("%s",&stu[i].name);
		printf("please enter number\n");
		scanf("%s",&stu[i].number);
		printf("please enter sex\n");
		scanf("%s",&stu[i].sex);
		printf("***********************\n");
	}
	for (int j=0;j<3;j++)
	{
		printf("%s\n",stu[j].name);
		printf("%s\n",stu[j].number);
		printf("%s\n",stu[j].sex);
		printf("***********************\n");
	}
	return 0;
}