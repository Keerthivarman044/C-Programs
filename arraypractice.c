
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
WAP to C to insert 99 on 0th index in same array .
i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;
o/p: int a[7]={99, 2,3,5,7,11,13};
#include<stdio.h>
int main(){
int arr[7]={2,3,5,7,11,13},in=0,num=99,i,ele;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele-1;i++)
printf("%d ",arr[i]);
printf("\n");
for(i=ele-1;i>in;i--)
arr[i]=arr[i-1];
arr[in]=num;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP to C to insert 51 on 3rd index in same array .
i/p: int a[7]={2,3,5,7,11,13 },in=3 ,num=51;
o/p: int a[7]={2,3,5,51,7,11,13};
#include<stdio.h>
int main(){
int arr[7]={2,3,5,7,11,13},in=3,num=51,i,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele-1;i++)
printf("%d ",arr[i]);
printf("\n");
for(i=ele-1;i>in;i--)
arr[i]=arr[i-1];
arr[in]=num;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP to C to insert 10 on sorted place in sorted array
i/p: int a[7]={2,3,5,7,11,13 }, num= 10;
o/p: int a[7]={2,3,5,7, 10, 11,13};
#include<stdio.h>
int main(){
int arr[7]={2,3,5,7,11,13},num=10,in,i,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele-1;i++)
printf("%d ",arr[i]);
printf("\n");
for(in=0;in<ele;in++){
if(arr[in]>num)
break;
}
for(i=ele-1;i>in;i--)
arr[i]=arr[i-1];
arr[in]=num;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);

}
WAP to C to insert 99 on 0th , 88 on 1st index in
same array .
i/p: int a[9]={30,11,45,34,14,8 ,50 },num=99 ;
o/p: int a[9]={99,88, 30,11,45,34,14,8, 50};
include<stdio.h>
int main(){
int arr[9]={30,11,45,34,14,8,50},num1=88,num2=99,in1=1,in2=0,i,ele,c=0;
ele=9;
for(i=0;i<ele-2;i++){
printf("%d ",arr[i]);
c++;
}
printf("\n");
for(i=c-1;i>=0;i--)
arr[i+2]=arr[i];
arr[in1]=num1;
arr[in2]=num2;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);

}
WAP in C to merge 2 array into 3rd array .
i/p: int a[3]={1,5,7}; b[3]={11,22,33};
o/p: int c[6]={1,11,5,22,7,33};
#include<stdio.h>
int main(){
int arr1[3]={1,5,7},arr2[3]={11,22,33},i,ele1,ele2;
ele1=sizeof(arr1)/sizeof(arr1[1]);
ele2=sizeof(arr2)/sizeof(arr2[1]);
int arr[ele1+ele2],j=0;
for(i=0;i<sizeof(arr);i++){
arr[j++]=arr1[i];
arr[j++]=arr2[i];
}

int ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
 WAP in C to merge 2 array into 3rd array
i/p: int a[2]={1,5}; b[4]={11,22,33,44};
o/p: int c[6]={1,11,5,22,33,44}
#include<stdio.h>
int main(){
int arr1[2]={1,5},arr2[4]={11,22,33,44},i,j,ele1,ele2,ele;
ele1=sizeof(arr1)/sizeof(arr1[1]);
ele2=sizeof(arr2)/sizeof(arr2[1]);
int arr[ele1+ele2];
j=0;
for(i=0;i<ele1||i<ele2;i++){
if(i<ele1)
arr[j++]=arr1[i];
if(i<ele2)
arr[j++]=arr2[i];
}
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to delete 0th index element from array
i/p: int a[5]={99,88,77,66,55}, in=0;
o/p: int a[5]={88,77,66,55};
#include<stdio.h>
int main(){
int arr[5]={99,88,77,66,55},i,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++)
arr[i]=arr[i+1];
ele--;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to delete 2nd index element from array
i/p: int a[5]={99,88,77,66,55}, pos=2;
o/p: int a[5]={99,88,66,55};
#include<stdio.h>
int main(){
int arr[5]={99,88,77,66,55},in=2,i;
int ele=sizeof(arr)/sizeof(arr[1]);
for(i=in;i<ele;i++){
arr[i]=arr[i+1];
}
ele--;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}

WAP in C to delete 2nd,3rd index from array .
i/p: int a[5]={99,88,77,66,55}, pos1=2, pos2=3;
o/p: int a[5]={99,88,55};

#include<stdio.h>
int main(){
int arr[5]={99,88,77,66,55},in1=2,in2=3,i,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=in2;i<ele;i++)
arr[i]=arr[i+1];
ele--;
for(i=in1;i<ele;i++)
arr[i]=arr[i+1];
ele--;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to delete odd elements from array .
i/p: int a[6]={11,12,14,13,15,18};
o/p: int a[6]={12,14,18};
#include<stdio.h>
int main(){
int arr[6]={11,12,14,13,15,18},i,ele,j;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
if(arr[i]%2!=0){
for(j=i;j<ele;j++){
arr[j]=arr[j+1];
}
ele--;
i--;
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
 WAP in C to delete -ve elements from array .
i/p: int a[6]={-11,12,-14,13,-15,-18};
o/p: int a[6]={12, 13}
#include<stdio.h>
int main(){
int arr[6]={-11,12,-14,13,-15,-18},i,ele,j;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
if(arr[i]<0){
for(j=i;j<ele;j++)
arr[j]=arr[j+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to delete duplicate elements from array .
i/p: a[10]={3,3,2,4,4,1,2,3,7,9}
o/p: a[10]={3,2,4,1,7,9}
#include<stdio.h>
int main(){
int arr[10]={3,3,2,4,4,1,2,3,7,9},i,j,ele,k;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele-1;i++){
for(j=i+1;j<ele;j++){
if(arr[i]==arr[j]){
for(k=j;k<ele;k++)
arr[k]=arr[k+1];
j--;
ele--;
}}}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to delete even duplicate ele from array.
i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
o/p: a[10]={3,3,2,4,5,3,9};

#include<stdio.h>
int main(){
int arr[10]={3,3,2,4,4,2,5,3,4,9},i,j,k,ele;
ele =sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele-1;i++){
for(j=i+1;j<ele;j++){
if(arr[i]%2==0 && arr[i]==arr[j]){
for(k=j;k<ele;k++)
arr[k]=arr[k+1];
j--;
ele--;
}
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to count all duplicate elements from array.
i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
o/p: 3 ->3 times ,2-> 2 times , 4-> 3 times

#include<stdio.h>
int main(){
int arr[10]={3,3,2,4,4,2,5,3,4,9},i,j,c,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
for(j=0;j<i;j++)
if(arr[i]==arr[j])
break;
if(j!=i)
continue;
c=1;
for(j=i+1;j<ele;j++)
if(arr[i]==arr[j])
c++;
if(c>1)
printf("%d->%dtyms\n",arr[i],c);
}

}
WAP in C to product of digit of all array elements.
i/p: int a[5]={11,202,234,456,90};
o/p: int a[5]={1, 0, 24, 120, 0};

#include<stdio.h>
int main(){
int arr[5]={11,202,234,456,90},i,ele,pro,temp,dig;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
pro=1;
for(temp=arr[i];temp;temp/=10){
dig=temp%10;
pro=pro*dig;
}
printf("%d ",pro);
}
}
WAP in C to store factorial of array in another array.
i/p: int a[4]={ 4, 5, 6, 4};
o/p: int b[4]={24,120,720,24}
#include<stdio.h>
int main(){
int arr[4]={4,5,6,4},i,fact,j;
int ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
fact=1;
for(j=1;j<=arr[i];j++)
fact=fact*j;
printf("%d ",fact);
}
}
WAP in C to print and count prime in array .
i/p: int a[7]={3,4,5,6,7,8,9};
o/p: 3 5 7 , count= 3

#include<stdio.h>
int main(){
int arr[7]={3,4,5,6,7,8,9},i,j,ele,c=0;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
for(j=2;j<arr[i];j++)
if(arr[i]%j==0)
break;
if(arr[i]==j){
c++;
printf("%d ",arr[i]);
}
}
printf("\n count=%d",c);
}
WAP in C to print and count perfect in array .
i/p: int a[7]={3,4,5,6,7,28,9};
o/p: 6 28 , count= 2
#include<stdio.h>
int main(){
int arr[7]={3,4,5,6,7,28,9},i,j,ele,sum,c=0;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
sum=0;
for(j=1;j<arr[i];j++){
if(arr[i]%j==0)
sum=sum+j;
}
if(sum==arr[i]){
printf("%d ",arr[i]);
c++;
}
}
printf("count=%d ",c);
}
WAP in C to print and count strong in array .
i/p: int a[7]={2,4,2,6,145,28,1};
o/p: 2 2 145 1 ,count= 4
#include<stdio.h>
int main(){
int arr[7]={2,4,6,2,145,28,1},i,j,sum,fact,ele,c=0,dig,temp;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
sum=0;
for(temp=arr[i];temp;temp/=10){
dig=temp%10;
fact=1;
for(j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==arr[i]){
c++;
printf("%d ",arr[i]);
}
}
printf("c=%d ",c);
}
WAP in C to print and count armstrong in array .
i/p: int a[7]={22,4,21,6,153,28,11};
o/p: 4 6 153 ,count= 3
#include<stdio.h>
int main(){
int arr[7]={22,4,21,6,153,28,11},i,j,sum,power,temp,dig,c,ele,tot=0;
ele=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<ele;i++){
sum=0,c=0;
for(temp=arr[i];temp;temp/=10){
c++;
}
for(temp=arr[i];temp;temp/=10){
dig=temp%10;
for(j=0,power=1;j<c;j++)
power=power*dig;

sum=sum+power;
}
if(sum==arr[i]){
tot++;
printf("%d ",arr[i]);
}
}
printf("total count=%d",tot);
}

 WAP in C to store factorial of array in another array.
 i/p: int a[4]={ 4, 5, 6, 4};
 o/p: int b[4]={24,120,720,24}
 include<stdio.h>
 int main(){
 int arr[4]={4,5,6,4},i,fact,j,b[4];
 int ele=sizeof(arr)/sizeof(arr[1]);
 for(i=0;i<ele;i++){
 fact=1;
 for(j=1;j<=arr[i];j++)
 fact=fact*j;
 b[i]=fact;
 }
for(i=0;i<ele;i++)
printf("%d ",b[i]);
 }
WAP in C to right rotate array 1 times in same array.
i/p: int a[7]={11,21,31,41,51,61,71};
o/p: int a[7]={71,11,21,31,41,51,61};
#include<stdio.h>
int main(){
int arr[7]={11,21,31,41,51,61,71},i,temp;
int ele=sizeof(arr)/sizeof(arr[1]);
temp=arr[ele-1];
for(i=ele-1;i>0;i--)
arr[i]=arr[i-1];
arr[0]=temp;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to right rotate array 3 times in same array.
i/p: int a[7]={11,21,31,41,51,61,71};
o/p: int a[7]={51,61,71,11,21,31,41};
#include<stdio.h>
int main(){
int arr[7]={11,21,31,41,51,61,71},ele,i,j,temp,ro=3;
ele=sizeof(arr)/sizeof(arr[1]);
ro=ro%ele;
for(i=0;i<ro;i++){
temp=arr[ele-1];
for(j=ele-1;j>0;j--)
arr[j]=arr[j-1];
arr[0]=temp;
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to left rotate array 1 times in same array.
i/p: int a[7]={11,21,31,41,51,61,71};
o/p: int a[7]={21,31,41,51,61,71,11};
#include<stdio.h>
int main(){
int arr[7]={11,21,31,41,51,61,71},i,temp,ele;
ele=sizeof(arr)/sizeof(arr[1]);
temp=arr[0];
for(i=0;i<ele-1;i++)
arr[i]=arr[i+1];
arr[ele-1]=temp;
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to left rotate array 2 times in same array.
i/p: int a[7]={11,21,31,41,51,61,71};
o/p: int a[7]={31,41,51,61,71,11,21};
#include<stdio.h>
int main(){
int arr[7]={11,21,31,41,51,61,71},i,j,temp,ele,ro=2;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ro;i++){
temp=arr[0];
for(j=0;j<ele-1;j++)
arr[j]=arr[j+1];
arr[ele-1]=temp;
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to shift all -ve elements to right side in
same array.
i/p: int a[7]={-1,22,3,-4,-8,33,77};
o/p: int a[7]={22,3,33,77,-1,-4,-8,}

#include<stdio.h>
int main(){
int arr[7]={-1,22,3,-4,-8,33,77},i,j,temp,ele;
ele=sizeof(arr)/sizeof(arr[1]);
int lim=ele;
for(i=0;i<ele;i++){
if(arr[i]<0){
temp=arr[i];
for(j=i;j<ele-1;j++)
arr[j]=arr[j+1];
arr[ele-1]=temp;
i--;
ele--;
}}
for(i=0;i<lim;i++)
printf("%d ",arr[i]);
}

WAP in C to shift all odd elements to right side
in same array.
i/p: int a[7]={11,22,22,44,55,33,88};
o/p: int a[7]={22,22,44,88,11,55,33};
#include<stdio.h>
int main(){
int arr[7]={11,22,22,44,55,33,88},i,j,temp,lim,ele;
ele=sizeof(arr)/sizeof(arr[1]);
lim=ele;
for(i=0;i<ele;i++){
if(arr[i]%2!=0){
temp=arr[i];
for(j=i;j<ele-1;j++)
arr[j]=arr[j+1];
arr[ele-1]=temp;
i--;
ele--;
}
}
for(i=0;i<lim;i++)
printf("%d ",arr[i]);
}
WAP in C to shift all odd elements to right side
in same array.
i/p: int a[7]={11,22,22,44,55,33,88};
o/p: int a[7]={22,22,44,88,11,55,33}

#include<stdio.h>
int main(){
int arr[7]={11,22,22,44,55,33,88},temp[7],i,ele,j;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
if(arr[i]%2==0)
temp[j++]=arr[i];
}
for(i=0;i<ele;i++){
if(arr[i]%2!=0)
temp[j++]=arr[i];
}
for(i=0;i<ele;i++)
arr[i]=temp[i];
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to shift all 0 to left side in same array.
i/p: int a[7]={11,0,0,44,0,33,0};
o/p: int a[7]={0,0,0,0,11,44,33};
#include<stdio.h>
int main(){
int arr[7]={11,0,0,44,0,33,0},temp[0],i,j,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
if(arr[i]==0)
temp[j++]=arr[i];
}
for(i=0;i<ele;i++){
if(arr[i]!=0)
temp[j++]=arr[i];
}
for(i=0;i<ele;i++)
printf("%d ",temp[i]);
}
WAP in C to print 1st perfect and pos form array .
i/p: int a[5]={2,4,6,28,6};
o/p: num= 6, pos=2
#include<stdio.h>
int main(){
int arr[5]={2,4,6,28,6},sum,i,j,ele;
iele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
sum=0;
for(j=1;j<arr[i];j++){
if(arr[i]%j==0)
sum+=j;
}
if(sum==arr[i]){
printf("num=%d ,pos=%d",arr[i],i);
break;
}
}
}
WAP in C to store 1st 7 prime number in array .
i/p: int a[7];
o/p: int a[7]={2,3,5,7,11,13,17}

#include<stdio.h>
int main(){
int arr[7],i,j,ele;
for(i=0;i<7;){
scanf("%d",&arr[i]);
for(j=2;j<arr[i];j++)
if(arr[i]%j==0)
break;
if(j==arr[i])
i++;
}
for(i=0;i<7;i++)
printf("%d ",arr[i]);
}
WAP in C to delete perfect number from array .
i/p: int a[7]={6,6,7,28,6,5,24};
o/p: int a[7]={7,5,24};
#include<stdio.h>
int main(){
int arr[7]={6,6,7,28,6,5,24},sum,i,j,ele,k;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
sum=0;
for(j=1;j<arr[i];j++)
if(arr[i]%j==0)
sum+=j;
if(arr[i]==sum){
for(k=i;k<ele;k++)
arr[k]=arr[k+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to replace prime index ele with 0 in array.
i/p: int a[8]={11,22,33,44,55,66,77,88};
o/p: int a[8]={11,22,0 ,0 ,55,0 ,77,0 }
#include<stdio.h>
int main(){
int arr[8]={11,22,33,44,55,66,77,88},i,j,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
for(j=2;j<i;j++)
if(i%j==0)
break;
if(i==j){
arr[i]=0;
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}
WAP in C to store prime index ele in another array.
i/p: int a[8]={11,22,33,44,55,66,77,88};
o/p: int b[8]={33,44,66,88};
#include<stdio.h>
int main(){
int arr[8]={11,22,33,44,55,66,77,88},i,j,b[8],k=0;
int ele=sizeof(arr)/sizeof(arr[1]);
for(i=2;i<ele;i++){
for(j=2;j<i;j++)
if(i%j==0){
break;
}
if(i==j){
b[k++]=arr[i];
}}
for(i=0;i<k;i++)
printf("%d ",b[i]);
}
WAP in C to delete all strong num from array .
i/p: int a[6]={2,145,2,14,3,2};
o/p: int a[6]={14,3};
#include<stdio.h>
int main(){
int arr[6]={2,145,2,14,3,2},i,j,sum,fact,ele,temp,dig,k;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
sum=0;
for(temp=arr[i];temp;temp/=10){
dig=temp%10;
fact=1;
for(j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==arr[i]){
for(k=i;k<ele-1;k++)
arr[k]=arr[k+1];
i--;
ele--;
}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}

 #include<stdio.h>
  int main(){
  int arr[6]={2,145,2,14,3,2},i,j,sum,fact,ele,temp,dig,k;
  ele=sizeof(arr)/sizeof(arr[1]);
  for(i=0;i<ele;i++){
  sum=0;
  for(temp=arr[i];temp;temp/=10){
  dig=temp%10;
  fact=1;
  for(j=1;j<=dig;j++)
  fact=fact*j;
 sum=sum+fact;
  }
 if(sum!=arr[i]){
printf("%d ",arr[i]);
  }
  }
//  for(i=0;i<ele;i++)
// printf("%d ",arr[i]);
}
 WAP in C to delete odd palindrome number
from array .
i/p: int a[6]={22,141,222,45,33,77};
o/p: int a[6]={22,222,45}
#include<stdio.h>
int main(){
int arr[6]={22,141,222,45,33,77},i,j,rev,dig,temp,ele;
ele=sizeof(arr)/sizeof(arr[1]);
for(i=0;i<ele;i++){
rev=0;
for(temp=arr[i];temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
}
if(rev==arr[i]&&arr[i]%2!=0){
for(j=i;j<ele-1;j++)
arr[j]=arr[j+1];
i--;
ele--;

}
}
for(i=0;i<ele;i++)
printf("%d ",arr[i]);
}






























