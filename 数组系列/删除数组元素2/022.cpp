#include<iostream>
using namespace std;
int main(){
	int a[12];//�������ڴ洢���ֵ����� 
	int n;//������µ����� 
	int i=0,j=0,k=0;//�����õ��ı��� 
	cout<<"please input ten integers:"<<endl;
	for(i=1;i<=10;i++){
		cin>>a[i];
	} //�������� 
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
	} //������� 
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
	} //������� 
	cout<<endl; 
	return 0;
} 