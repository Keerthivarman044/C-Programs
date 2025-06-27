//1.wap to get multiplication table of the given no
#include<stdio.h>
int main(){
int num,c,range;
scanf("%d %d",&num,&range);
for(c=1;c<=range;c++){
printf("%d * %d = %d\n",c,num,c*num);
}
}
//2.wap to get binary of the given num
#include<stdio.h>
int main(){
int num,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--){
printf("%d",num>>pos&1);
}
}
//3.wap to get addition of each digit of given no
#include<stdio.h>
int main(){
int num,temp,sum=0;
scanf("%d",&num);
for(;num;num/=10){
temp=num%10;
sum+=temp;
}
printf("%d",sum);
}
//4.wap to get binary of theenumber and neet to count how many bits are set and clear
#include<stdio.h>
int main(){
int num,pos,set=0,clear=0;
scanf("%d",&num);
for(pos=31;pos>=0;pos--){
int result=num>>pos&1;
printf("%d",result);
if(result)
set++;
else
clear++;
}
printf("\nclear=%d set=%d",clear,set);
}
//5.wap to get the count of digit in the given no
#include<stdio.h>
int main(){
int num,temp,c;
scanf("%d",&num);
for(c=0;num;num/=10){
temp=num%10;
c++;
}
printf("%d",c);
}
//6.sum of odd numbers in given no
#include<stdio.h>
int main(){
int num,temp,sum=0;
scanf("%d",&num);
for(;num;num/=10){
temp=num%10;
if(num%2!=0)
sum+=temp;
}
printf("%d",sum);
}
//7.wap to sum of digits more than 5 in a given no
#include<stdio.h>
int main(){
int num,sum=0,temp;
scanf("%d",&num);
for(;num;num/=10){
temp=num%10;
if(temp>5)
sum+=temp;
}
printf("%d",sum);
}
//8.wap to count the even digit more than 4
#include<stdio.h>
int main(){
int num,c,temp;
scanf("%d",&num);
for(c=0;num;num/=10){
temp=num%10;
if(temp%2==0 && temp>4)
c++;
}
printf("%d",c);
}
//9.sum of last 3 digits of given  number
#include<stdio.h>
int main(){
int num,sum=0,temp,c=0;
scanf("%d",&num);

for(;num;num/=10){
if(c<3){
temp=num%10;
c++;
sum+=temp;
}
}
printf("%d",sum);
}
//10.wap to sum alternative digits
#include<stdio.h>
int main(){
int num,sum=0,temp,c;
scanf("%d",&num);
for(c=0;num;num/=10){
temp=num%10;
if(c%2!=0)
sum+=temp;
c++;
}
printf("%d",sum);
}
//11.wap to print even factor of the given num
#include<stdio.h>
int main(){
int num,i;
scanf("%d",&num);
for(i=1;i<num;i++){
if(num % i==0 && i%2==0)
printf("%d ",i);
}
}
//12.factors of the given no
#include<stdio.h>
int main(){
int num,i;
scanf("%d",&num);
for(i=1;i<num;i++){
if(num%i==0)
printf("%d ",i);
}
}
//13. odd factors of given  num
#include<stdio.h>
int main(){
int i,num;
scanf("%d",&num);
for(i=1;i<num;i++){
if(num%i==0&&i%2!=0)
printf("%d ",i);
}
}
//14.wap to print the even no from specific range using bitwise opr
#include<stdio.h>
int main(){
int start,end,i;
scanf("%d %d",&start,&end);
for(i=start;i<=end;i+=1){
if((i&1)==0)//formula for check the given no is odd or not -->((num&1)==0)
printf("%d ",i);
}
}
//15.wap to print the altenative odd no of a given range
#include<stdio.h>
int main(){
int start,end,c=0,i;
scanf("%d %d",&start,&end);
for(i=start;i<=end;i++){
if(i%2!=0 ){
if( c%2==0)
printf("%d ",i);
c++;
}
}
}
//wap to print the series 1 2 4 7 11 16 22
#include<stdio.h>
int main(){
int start,limit;
scanf("%d %d",&start,&limit);
for(int i=1;i<=limit;i++){
printf("%d ",start);
start+=i;
}}
//wap to print the series -13 -8 -4 -1 1 2
#include<stdio.h>
int main(){
int start,limit,diff;
scanf("%d %d %d",&start,&limit,&diff);
for(int i=0;i<limit;i++){
printf("%d ",start);
start+=diff;
diff--;
}}
// WAP in C to print given series .2 9 28 65 126 217
 #include<stdio.h>
  2 int main(){
  3         int num,i;
  4         scanf("%d",&num);
  5         for(i=1;i<=num;i++){
  6                 int result=i*i*i+1;
  7                 printf("%d ",result);
  8         }
  9 }















































