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
WAP in C to print binary of all elemets in array .
i/p: int a[5]={10,100,1000,100,10}
o/p:

#include<stdio.h>
void main(){
int arr[5]={10,100,1000,100,10};
int i,pos,ele;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++){
for(pos=31;pos>=0;pos--){
printf("%d",arr[i]>>pos&1);
}
printf(" ");
}
}
WAP in C to delete 0th bit of all array elements.
i/p: int a[5]={12,10,35,63,512};
o/p: int a[5]={ 6, 5,17,31,256};

#include<stdio.h>
void main(){
int arr[5]={12,10,35,63,512};
int i,ele;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++){
arr[i]=arr[i]>>1;
printf("%d ",arr[i]);
}
}
WAP in C to count all set and clear bit array .
i/p: int a[5]={10,15,64,100,511};
o/p: set count =19 , clear count=141

#include<stdio.h>
void main(){
int arr[5]={10,15,64,100,511};
int i,ele,set=0,clear=0,pos;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++){
for(pos=31;pos>=0;pos--){
if((arr[i]>>pos)&1)
set++;
else
clear++;
}
}
printf("set count=%d , clear count=%d",set,clear);
}
WAP in C to store set bit count to another array.
i/p: int a[5]={10,15,64,100,511};
o/p: int b[5]={2 , 4, 1, 3, 9 };

#include<stdio.h>
void main(){
int arr[5]={10,15,64,100,511},arr2[5];
int i,set,clear,ele,pos;
ele=sizeof(arr)/sizeof(arr[2]);
for(i=0;i<ele;i++){
set=0;
for(pos=31;pos>=0;pos--){
if(arr[i]>>pos&1)
set++;
}
arr2[i]=set;
}
for(i=0;i<ele;i++)
printf("%d ",arr2[i]);
}
WAP in C to count -ve ,+ve, even , odd ele in array .
i/p: int a[10]={-11,11,12,-12,9,8,-3,10,22};
o/p: +ve = 6 , -ve = 3 , odd = 2 , even = 4

#include<stdio.h>
void  main(){
int arr[10]={-11,11,12,-12,9,8,-3,10,22};
int pos=0,neg=0,eve=0,odd=0,i,ele;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++){
if(arr[i]<0)
neg++;
if(arr[i]>0){
pos++;
if(arr[i]%2==0){
eve++;
}
else
odd++;
}
}
printf("+ve=%d,-ve=%d,odd=%d,even=%d",pos,neg,odd,eve);
}
WAP in C to print Smallest element in array.
i/p : int a[6]={2,2,3,5,5,4};
o/p : res = 2

#include<stdio.h>
void main(){
int arr[6]={2,2,3,5,5,4};
int s,i,ele;
ele=sizeof(arr)/sizeof(arr[0]);
s=arr[0];
for(i=1;i<ele;i++){
if(s>arr[i])
s=arr[i];
}
printf("smallest=%d",s);
}
WAP in C to print second largest element in array.
i/p : int a[7]={2,2,3,5,5,4,4};
o/p : second large = 4

#include<stdio.h>
void main(){
int arr[7]={2,2,3,5,5,4,4};
int i,ele,l,sl;
ele=sizeof(arr)/sizeof(arr[0]);
if(arr[0]>arr[1]){
l=arr[0];
sl=arr[1];
}
else if(arr[0]<arr[1]){
l=arr[1];
sl=arr[0];
}
else{
l=sl=arr[0];
}
for(i=2;i<ele;i++){
if(arr[i]>l){
sl=l;
l=arr[i];
}
else if(sl<arr[i]&&arr[i]!=l)
sl=arr[i];
}
printf("sl=%d\n",sl);
}
WAP in C to print second smallest element in array
i/p : int a[7]={2,2,1,5,5,4,4};
o/p : second small = 2
#include<stdio.h>
void main(){
int arr[7]={2,2,1,5,5,4,4};
int i,ele,s,ss;
ele=sizeof(arr)/sizeof(arr[0]);
s=arr[0];
ss=arr[1];
if(arr[0]<arr[1]){
s=arr[0];
ss=arr[1];
}
else if(arr[0]>arr[1]){
s=arr[1];
ss=arr[0];
}
else{
s=ss=arr[0];
}
for(i=2;i<ele;i++){
if(arr[i]<s){
ss=s;
s=arr[i];
}
else if(ss>arr[i]&&arr[i]!=s){
ss=arr[i];
}
}
printf("ss=%d",ss);
}
WAP in C to swap 3rd ele with 4th ele in array .
i/p: int a[6]={11,22,33,44,55,66};
o/p: 11 22 33 55 44, 66

#include<stdio.h>
int main(){
int arr[6]={11,22,33,44,55,66};
int i,j,ele,t;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=3,j=4;i<4;i++,j++){
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
16. WAP in C to swap(using bitwise) 0th ele with
last ele in array using 2 pointer without any loop.
i/p: int a[6]={111,222,333,444,555,666}, *p,*q ;
o/p: 666 222 333 444 555 111
#include<stdio.h>
int main(){
int arr[6]={111,222,333,444,555,666};
int *p,*q,t,ele;
ele=sizeof(arr)/sizeof(arr[0]);
p=arr;
q=p+5;
t=*p;
*p=*q;
*q=t;
for(int i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to sort 1st 3 element of array .
i/p: int a[7]={11,33,22,2,9,1,6};
o/p: 11 22 33 2 9 1 6
*/
#include<stdio.h>
void main(){
int arr[7]={11,33,22,2,9,1,6};
int i,j,ele,t;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<2;i++){
for(j=0;j<2;j++){
if(arr[j]>arr[j+1]){
t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}































