/*wap to print the binary of the given num using functions
#include<stdio.h>
void binary_print(int);
int main(){
int num;
scanf("%d",&num);
binary_print(num);
}
void binary_print(int num){
int pos;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
wap to count the set bits
#include<stdio.h>
int set_count(int);
void binary_print(int);
void main(){
int num;
printf("enter the num : ");
scanf("%d",&num);
binary_print(num);
printf("set count=%d\n",set_count(num));
}
int set_count(int num){
int pos=31,c=0;
while(pos>=0){
if(num>>pos&1)
c++;
pos--;
}
return c;
}
void binary_print(int num){
int pos=31;
while(pos>=0){
printf("%d",num>>pos&1);
pos--;
}
printf("\n");
}
wap to swap two numbers
#include<stdio.h>
void swap(int*,int*);
void main(){
int num1,num2;
printf("enter the numbers: ");
scanf("%d%d",&num1,&num2);
swap(&num1,&num2);
printf("num1=%d num2=%d",num1,num2);
}
void swap(int *p,int *q){
int t;
t=*p;
*p=*q;
*q=t;
} 
wap to count set and clear bit
#include<stdio.h>
void bit_count(int,int*,int*);
void main(){
int num,set,clear;
scanf("%d",&num);
bit_count(num,&set,&clear);
printf("set=%d clear=%d",set,clear); 
}
void bit_count(int num,int*set,int*clear){
*set=0,*clear=0;
int pos=31;
while(pos>=0){
if(num>>pos&1)
(*set)++;
else (*clear)++;
pos--;
}
}
wap to find the given function is prime or not
#include<stdio.h>
int is_prime(int );
void main(){
int num;
scanf("%d",&num);
if(is_prime(num))
printf("%d is a prime no",num);
else printf("%d is not a prime",num);
}
int is_prime(int num){
int i=2;
while(i<num){
if(num%i==0)
break;
i++;
}

if(num==i)
return 1;
else
 return 0;
}
wap to print the prime number in given range
#include<stdio.h>
void prime_print(int,int);
void main(){
int start,end;
scanf("%d%d",&start,&end);
prime_print(start,end);
}
void prime_print(int start,int end){
int i=start;
while(i<end){
int j=2;
while(j<i){
if(i%j==0)
break;
j++;
}
if(i==j)
printf("%d ",i);
i++;
}
}
wap to scan and print the array elements
#include<stdio.h>
void scan_print(int*,int);
void main(){
int n;
scanf("%d",&n);
int arr[n];
scan_print(arr,n);
}
void scan_print( int *p,int ele)
{
int i=0;
while(i<ele){
scanf("%d",&p[i]);
i++;
}
i=0;
while(i<ele){
printf("%d ",p[i]);
i++;
}}
wap to sort the array using bubble and selection sort and print it
#include<stdio.h>
void print_arr(int*,int);
void buble_sort(int *,int);
void selection_sort(int *,int);
void main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
buble_sort(arr,n);
print_arr(arr,n);
printf("\n");
selection_sort(arr,n);
print_arr(arr,n);
} 
void buble_sort(int *p,int n){
int i=0,t;
while(i<n-1){
int j=0;
while(j<n-1-i){
if(p[j]>p[j+1]){
t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}
j++;
}
i++;
}
}
void selection_sort(int *p,int n){
int i=0,t;
while(i<n-1){
int j=i+1;
while(j<n){
if(p[i]>p[j]){
t=p[i];
p[i]=p[j];
p[j]=t;
}
j++;
}
i++;
}
}
void print_arr(int*p,int n){
for(int i=0;i<n;i++)
printf("%d ",p[i]);
}
WAP in C using function to sum of digit of all
elements in array , store results in another array.
i/p: int a[6]={1,22,121,34,78,444};
o/p: int b[6]= {1, 4, 4, 7, 15, 12 };
void sum_fun(int *a,int *b , int ele );
#include<stdio.h>
void sum_fun(int *,int *,int);
void main(){
int n,i;
scanf("%d",&n);
int arr[n],arr1[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
sum_fun(arr,arr1,n);
}
void sum_fun(int *a,int*b,int n){
int i,temp,dig;
for(i=0;i<n;i++){
int sum=0;
for(temp=a[i];temp;temp/=10){
dig=temp%10;
sum=sum+dig;
}
b[i]=sum;
}
for(i=0;i<n;i++)
printf("%d ",b[i]);
}
WAP in C using function to reverse all elements
of array ,store results in another array.
i/p: int a[6]={12,42,123,34,78,414};
o/p: int b[6]={21,24,321,43,87,414};
void rev_fun(int *a,int *b , int ele );*/
#include<stdio.h>
void rev_fun(int *,int *b,int );
void main(){
int n,i;
scanf("%d",&n);
int arr[n],arr1[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
rev_fun(arr,arr1,n);
}
void rev_fun(int *a,int*b,int n){
int rev,i,temp,dig;
for(i=0;i<n;i++){
rev=0;
for(temp=a[i];temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
}
b[i]=rev;
}
for(i=0;i<n;i++)
printf("%d ",b[i]);
}
























