#include <stdio.h>//ÎÒÓÃcĞ´µÄ
int main(void)
{
    void remove(int* heap, int key, int size);
	
    int a[]={0,2,1,4,3,9,5,7,6,8,1,2,3,8,6,4};
    int s;
    int k=2;
    s=sizeof(a)/sizeof(int);
    remove(a,k,s);
    return 0;
}

void remove(int* heap, int key, int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        if(key==*(heap+i))
        {
            j=i;
            for(j;j<size;j++)
            {
                *(heap+j)=*(heap+j+1);
            }
            size--;
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",*(heap+i));
    printf("\n");
}