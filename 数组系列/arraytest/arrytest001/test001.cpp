#include <STDIO.H>
#include <IOSTREAM.H>
#include <STRING.H>
struct student
{
	char name[20];
	char number[20];
	char sex[20];
	int  score;
};
int main()
{
	student stu[3];
	int max;
	int cal1,cal2=0;
	char str[10]="woman";
	printf("please enter the number of data\n");
	scanf("%d",&max);
	for (int i=0;i<max;i++)
	{
		printf("please enter name\n");
		scanf("%s %s %s %d",&stu[i].name,&stu[i].number,&stu[i].sex,&stu[i].score);
	}
	for (int j=0;j<max;j++)
	{
		if (strcmp(stu[j].sex,str) == 0)  
		{	
			cal1 = stu[j].score;
			cal2 = cal1 + cal2;
			printf("%s %s %s %d\n",stu[j].name,stu[j].number,stu[j].sex,stu[j].score);
		} 	
	}	
	printf("女生分数总和:%d\n",cal2);

	return 0;
}