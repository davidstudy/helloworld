#include<iostream>
using namespace std;
int main(){
	int a[12];//定义用于存储数字的数组 
	int n;//输入的新的数字 
	int i=0,j=0,k=0;//排序用到的变量 
	cout<<"please input ten integers:"<<endl;
	for(i=1;i<=10;i++){
		cin>>a[i];
	} //输入数据 
	for(i=1;i<10;i++){
		k=i;
		for(j=i+1;j<=10;j++){
			if(a[j]<a[k]){
				k=j; 
			}
		}
		a[0]=a[i];
		a[i]=a[k];
		a[k]=a[0];
	} 
	cout<<"sorting order:"<<endl;
	for(i=1;i<=10;i++){
		cout<<a[i]<<"   ";
	} //输出数据 
	cout<<endl;
	cout<<"please input a new one:";
	cin>>n;
	for(i=1;i<=10;i++){
		if(a[i]>n){
			k=n;
			for(j=10;j>=i;j--){
				a[j+1]=a[j];
			}
			a[i]=n;
			break;
		}
	}
	cout<<"new sorting order:"<<endl;
	for(i=1;i<=11;i++){
		cout<<a[i]<<"   ";
	} //输出数据 
	cout<<endl; 
	return 0;
} 