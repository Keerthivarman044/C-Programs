/*
WAP in C to print array using int pointer.
i/p: int a[5]={11,22,33,44,55}, *p=a;
o/p: 11 22 33 44 55

#include<stdio.h>
void main(){
int arr[5]={11,22,33,44,55};
int *p=arr,ele,i;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++)
printf("%d ",*(p+i));
}
WAP in C to sort array in decending order .
i/p: int a[5]={11,55,88,22,44}, *p ;
o/p: 88 55 44 22 11

#include<stdio.h>
void main(){
int arr[5]={11,55,88,22,44};
int ele=sizeof(arr)/sizeof(arr[0]);
int i,j,t;
for(i=0;i<ele-1;i++){
for(j=0;j<ele-1-i;j++){
if(arr[j]<arr[j+1]){
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}

WAP in C to sort 1st 4 ele of array in decending .
i/p: int a[7]={5,3,1,2,1,9,6};
o/p: 5 3 2 1 1 9 6
#include<stdio.h>
void main(){
int arr[7]={5,3,1,2,1,9,6};
int ele=sizeof(arr)/sizeof(arr[0]);
int i,j,t;
for(i=0;i<4;i++){
for(j=0;j<4;j++){
if(arr[i]>arr[j]){
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}

WAP in C to find sum of all array elements.
i/p: int a[5]={10,20,30,40,50};
o/p: 150

#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int ele =sizeof(arr)/sizeof(arr[0]);
int i,j,sum=0;
for(i=0;i<ele;i++)
sum=sum+arr[i];
printf("%d",sum);
}
WAP in C to find sum of 1st digit of all array
i/p: int a[5]={123,23,89,3425,721};
o/p: 1+2+8+3+7 ----> 21

#include<stdio.h>
int main(){
int arr[5]={123,23,89,3425,721};
int ele=sizeof(arr)/sizeof(arr[0]);
int i,j,temp,sum=0,dig;
for(i=0;i<ele;i++){
for(temp=arr[i];temp;temp/=10){
dig=temp;
}
sum=sum+dig;
}
printf("%d\n",sum);
}
WAP in C to delete 1st digit of all array elements.
i/p: int a[6]={12,234,321,45,654,1234};
o/p: int a[6]={2 , 34, 21, 5, 54, 234};
*/
#include<stdio.h>
void main(){
int arr[6]={12,234,321,45,654,1234};
int ele=sizeof(arr)/sizeof(arr[0]);
int i,j,temp,dig;
for(i=0;i<ele;i++){
for(temp=arr[i],dig=1;temp/dig>=10;dig*=10);
arr[i]=arr[i]%dig;
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}


























































