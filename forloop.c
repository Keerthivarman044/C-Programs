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
   int main(){
           int num,i;
           scanf("%d",&num);
           for(i=1;i<=num;i++){
                   int result=i*i*i+1;
                   printf("%d ",result);
           }
   }
//wap to print the number into words
  #include<stdio.h>
  int main(){
  int dum, correct=0,rev=0, num,temp;
  scanf("%d",&num);
  for(;num;num/=10){
  temp=num%10;
  rev=rev*10+temp;
  }
  for(;rev;rev/=10){
  dum=rev%10;
  if(dum==0)
  printf("zero ");
  else if(dum==1)
  printf("one ");
  else if(dum==2)
  printf("two ");
  else if(dum==3)
  printf("three ");
  else if(dum==4)
  printf("four ");
  else if(dum==5)
  printf("five ");
  else if(dum==6)
  printf("six ");
  else if(dum==7)
  printf("seven");
  else if(dum==8)
  printf("eight");
  else if(dum==9)
  printf("nine");
  }
  }
// wap to count the even digits
#include<stdio.h>
int main(){
 int num,c=0,temp;
 scanf("%d",&num);
 for(;num;num/=10){
temp=num%10;
if(temp%2==0)
 c++;
 }
 printf("%d",c);
 }
 //wap to sum of last 3 odd digits
 #include<stdio.h>
 int main(){
 int num,c=0,sum=0,temp;
scanf("%d",&num);
for(;c<3;num/=10){
 temp=num%10;
if(temp%2!=0){
 sum=sum+temp;
 c++;
 }
 }
 printf("%d",sum);
}
//wap to print last 3 digit from last
 #include<stdio.h>
 int main(){
 int num,temp,c=0;
 scanf("%d",&num);
 for(;num;num/=10){
 if(c<3){
 temp=num%10;
 printf("%d ",temp);
 }
 c++;
}
 }
 //wap to get the first digit
 #include<stdio.h>
 int main(){
 int num,temp,rev=0,dum;
 scanf("%d",&num);
 for(;num;num/=10){
 temp=num%10;
rev=rev*10+temp;
 }
 dum=temp%10;
printf("%d",dum);
 }
 //wap to reverse a digit more than 5
 #include<stdio.h>
 int main(){
 int num,rev=0,temp;
 scanf("%d",&num);
for(;num;num/=10){
 temp=num%10;
 if(temp>5)
 rev=rev*10+temp;
 }
 printf("%d",rev);
 }
 //wap for sum of first 3 digits
 #include<stdio.h>
 int main(){
 int c=0, num,rev=0,sum=0,dum,temp;
 scanf("%d",&num);
 for(;num;num/=10){
 temp=num%10;
 rev=rev*10+temp;
 }
 printf("%d\n",rev);
for(;rev;rev/=10){
 dum=rev%10;
 if(c<3)
 sum+=dum;
 c++;
 }
 printf("%d",sum);
 }
 // wap to print the last 2 digit
 #include<stdio.h>
 int main(){
 int num,temp,c=0;
 scanf("%d",&num);
 for(;num;num/=10){
 temp=num%10;
 if(c==1)
 printf("%d",temp);
 c++;
 }
 }
 //wap to print middle digit
 #include<stdio.h>
 int main(){
 int temp1, num,mid,temp,c=0;
 scanf("%d",&num);
temp=num;
 for(;temp;temp/=10)
 c++;
 mid = c/2;
 temp=num;
 for(int i=0;i<c-mid;i++){
 temp1=temp%10;
 temp/=10;
 }
 printf("%d",temp1);
 }
//wap to sum first and last digit
#include<stdio.h>
int main(){
 int num,temp;
 scanf("%d",&num);
 temp=num;
 int last=temp%10;//12345%10=5
int first;
 for(;temp;temp/=10){
 first=temp;//1.first=1234//2.first=123//3.first=12//4.first=1//5.1/10=0 condition false
 }
 printf("%d",first+last);
 }
 */
 //wap to sum first and second last digit
 #include<stdio.h>
 int main(){
 int num,last,first,temp;
 scanf("%d",&num);
 temp=num;
 for(int i=0;i<2;i++){
 last=temp%10;
 temp/=10;}
 printf("%d\n",last);
 for(;temp;temp/=10)
 first=temp;
printf("%d\n",first);
 printf("sum=%d",first+last);
 }
  // wap to delete the specific num
 #include<stdio.h>
 int main(){
 int num,del,temp,rev=0,dum,rev2=0;
 scanf("%d %d",&num,&del);
 for(;num;num/=10){
 temp=num%10;
 if(temp!=del)
 rev=rev*10+temp;
 }
 printf("%d",rev);
 for(;rev;rev/=10){
 dum=rev%10;
rev2=rev2*10+dum;
 }
 printf("\n%d",rev2);
}
 //wap to replace the multiple of specific digit with one
#include<stdio.h>
 int main(){
 int dum, temp, num,rev=0,mul;
 scanf("%d %d",&num,&mul);
 for(;num;num/=10){
 temp=num%10;
 rev=rev*10+temp;
}
 for(;rev;rev/=10){
 dum=rev%10;
 if(dum%mul==0)
 printf("1");
 else
 printf("%d",dum);
 }
}














































