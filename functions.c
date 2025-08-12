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
void rev_fun(int *a,int *b , int ele );
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
WAP in C using function to delete 1st digits of
all elements in array .
i/p: int a[6]={12,142,1234,314,78,414};
o/p: int a[6]={2,42,234,34,8,14};
void del_fun(int *a, int ele );
#include<stdio.h>
void del_fun(int *,int);
void main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
del_fun(arr,n);
}
void del_fun(int *a,int n){
int i,rev,dig,temp,num;
for(i=0;i<n;i++){
rev=0,num=0;
for(temp=a[i];temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
}
rev=rev/10;
for(temp=rev;temp;temp/=10){
dig=temp%10;
num=num*10+dig;
}
printf("%d ",num);
}
}
WAP in C using function to count strong and
armstrong number elements in array .
i/p: int a[6]={2,153,145,2,3,153};
o/p: strong number count = 3
armstrong number count = 5
int strong_fun(int *a, int ele );
int armstrong_fun(int *a, int ele );
#include<stdio.h>
int strong_fun(int *,int);
int armstrong_fun(int *,int);
void main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",(arr+i));
int strong=strong_fun(arr,n);
printf("strong number count=%d\n",strong);
int arm=armstrong_fun(arr,n);
printf("armstrong number count=%d",arm);
}
int strong_fun(int*a,int n){
int i,j,sum,dig,fact,temp,c=0;
for(i=0;i<n;i++){
sum=0;
for(temp=a[i];temp;temp/=10){
dig=temp%10;
fact=1;
for(j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==a[i])
c++;
}
return c;
}
int armstrong_fun(int*a,int n){
int i,j,digcou,dig,temp,power,sum,c=0;
for(i=0;i<n;i++){
sum=0;
digcou=0;
for(temp=a[i];temp;temp/=10){
digcou++;
}
for(temp=a[i];temp;temp/=10){
dig=temp%10;
power=1;
for(j=0;j<digcou;j++)
power=power*dig;
sum=sum+power;
}
if(sum==a[i])
c++;
}
return c;
}
WAP in C using function to count -ve element
(bitwise op) and delete -ve elements in array .
i/p: int a[6]={-2, 2,-5,-12,5,-7};
o/p: -ve number count = 4
int a[ ]= {2,5};
int count_del_fun(int *a, int *ele );
#include<stdio.h>
int count_del_fun(int*,int*);
void main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",(arr+i));
int count=count_del_fun(arr,&n);
printf("%d\n",count);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
int count_del_fun(int*a,int*n){
int i,j,pos=31,c=0;
for(i=0;i<*n;i++){
if(a[i]&(1<<pos)){
c++;
for(j=i;j<*n-1;j++)
a[j]=a[j+1];
(*n)--;
i--;
}
}
return c;
}
WAP in C using function to right rotate array 2
times .
i/p: int a[6]={-2, 2,-5,-12,5,-7};
o/p: int a[6]={5,-7,-2, 2,-5,-12};
void rotate_fun(int *a, int ele ,int n);

#include<stdio.h>
void rotate_fun(int*,int,int);
void main(){
int i,n,ro;
scanf("%d %d",&n,&ro);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",(arr+i));
rotate_fun(arr,n,ro);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
void rotate_fun(int*a,int n,int ro){
int i,temp,j;
for(i=0;i<ro;i++){
temp=a[n-1];
for(j=n-1;j>0;j--)
a[j]=a[j-1];
a[0]=temp;
}
}
WAP in C using function to insert num in array
at given particular location (index).
i/p: int a[6]={-1,2,3,-5,-7}; , n= 99 , p=2
o/p: int a[6]= {-1, 2 ,99 ,3,-5, -7};
void in_fun(int *a, int ele,int n, int p );
#include<stdio.h>
void in_fun(int*,int,int,int);
void main(){
int i,n,in,val;
printf("enter No,index,value");
scanf("%d %d",&in,&val);
int arr[6]={-1,2,3,-5,-7};
n=sizeof(arr)/sizeof(arr[0]);
in_fun(arr,n,val,in);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
void in_fun(int*a,int n,int value,int in){
int i,j;
for(i=n-1;i>in;i--){
a[i]=a[i-1];
}
a[in]=value;
}
WAP in C using function to merge 2 array data
in 3rd array .
i/p: int a[6]={2,3,4}, b[3]={11,22,33};
o/p: int c[6]= {2,11,3,22,4,33};
void in_fun(int *a, int *b, int *c,
int ele1,int ele2, int ele3 );
#include<stdio.h>
void in_fun(int*,int *,int *,int ,int,int);
int main(){
int i,n1,n2,n3;
int arr1[3]={2,3,4},arr2[3]={11,12,13};
n1=sizeof(arr1)/sizeof(arr1[1]);
n2=sizeof(arr2)/sizeof(arr2[1]);
n3=n1+n2;
int arr3[n3];
in_fun(arr1,arr2,arr3,n1,n2,n3);
for(i=0;i<n3;i++)
printf("%d ",arr3[i]);
}
void in_fun(int*a,int*b,int*c,int n1,int n2,int n3){
int i,j=0,k=0;
for(i=0;i<n1&&i<n2;){
c[k++]=a[i++];
c[k++]=b[j++];
}
}
WAP in C using function to delete the
duplicate char from given string .
i/p: char s[20]=”abcaaabbccaa”;
o/p: abc
void del_fun(char * s );
#include<stdio.h>
void del_fun(char *);
void main(){
char s[20]="abcaaabbccaa";
del_fun(s);
}
void del_fun(char*s){
int i,k,j;
for(i=0;s[i];i++){
for(j=i+1;s[j];j++){
if(s[i]==s[j]){
for( k=j;s[k];k++)
s[k]=s[k+1];
j--;
}}
}
printf("%s",s);
}
WAP in C using function to delete all digits in
strings and count deleted digits .
i/p: char s[20]=”a1b2c3d4123”;
o/p: abcd , digit count = 7
int del_count_fun(char * s );
#include<stdio.h>
int del_count_fun(char*);
void main(){
char s[20]="a1b2c3d4123";
int c=del_count_fun(s);
printf("%d\n",c);
printf("%s\n",s);
}
int del_count_fun(char*s){
int i,j,c=0,k;
for(i=0;s[i];i++){
if(s[i]>='0'&&s[i]<='9'){
c++;
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}
}
return c;
}
WAP in C using function to revesre all word in
string ,count no of word having digits .
i/p: char s[20]=”coding sirji vec123 A123 ”;
o/p: gnidoc ijris 321cev 321A
word count = 2
void rev_word_fun(char * s );
int count_word_fun(char * s )
*/
#include<stdio.h>
void rev_word_fun(char*);
int count_word_fun(char*);
void main(){
char s[30]="coding sirji vec123 a123";
rev_word_fun(s);
int c=count_word_fun(s);
printf("\nword count=%d",c);
}
void rev_word_fun(char*s){
int i=0,j,start,end,k,temp;
while(s[i]){
while(s[i]==' ')
i++;
start=i;
while(s[i]!=' '&&s[i]!='\0'){
i++;
}
end=i-1;
j=start;
k=end;
while(j<k){
temp=s[j];
s[j]=s[k];
s[k]=temp;
j++;
k--;
}
}
printf("%s",s);
}
int count_word_fun(char*s){
int dig=0,i=0,c=0;
while(s[i]){
while(s[i]==' ')
i++;
while(s[i]!=' '&&s[i]!='\0'){
if(s[i]>='0'&&s[i]<='9')
dig=1;
i++;
}
if(dig)
c++;
}
return c;
}




















