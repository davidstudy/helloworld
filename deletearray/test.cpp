#include <IOSTREAM.H>
#include <CSTRING>
#include <STDIO.H>

int main()
{	
	int a,b,c,k,r;
	int m[5];
	int array[]={0,1,2,3,4,5,6,7,8,9};
	c=sizeof(array)/sizeof(int);
	//����n��ȡֵ
// 	for (int q=0;q<2;q++)
// 	{
// 		printf("please input a number:");
// 		scanf("%d",&a);
// 	}
	//ֻȡһ��ֵ
/*	printf("please input a number:");
	scanf("%d",&a);
	for (int i=0;i<c;i++)
	{
		if (a==array[i])
		{
			k=i;
			for(k;k<c;k++)
			{
				array[k]=array[k+1];	
			}
			c--;
			break;
		}
	}	*/
//Ҫ���������ͼ�����ȡ����y
	for(int y=0;y<3;y++)
	{
		printf("please input a number:");
		scanf("%d",&m);
		for (int i=0;i<c;i++)
		{
			if (*m==array[i])
			{
				k=i;
				for(k;k<c;k++)
				{
					array[k]=array[k+1];
				}
				*m=*(m+1);
				c--;
				break;
			}
		}
	}
	for(int j=0;j<c;j++)
	{
		printf("%d\n",array[j]);
	}
	return 0;
}