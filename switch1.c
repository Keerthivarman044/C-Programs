/*wap to print the the following using switch
1.binary printing
2.perfect no
3.palindrome or not
4.prime no
5.arm strong no
6.factors of the number
7.print the hallow pramyid pattern for the given no
*/
#include<stdio.h>
int main(){
int num;
printf("Enter the no:");
scanf("%d",&num);
int options;
printf("\nselect options\n 1.binary of the given number\n 2.perfect number or not\n3.palindrome or not\n4.prime no or not\n5.armstrong no\n6.factors of the number\n7.hallow pattern\n");
scanf("%d",&options);
switch(options){
case 1:
for(int i=31;i>=0;i--)
printf("%d ",num>>i&1);
break;
case 2:
int add=0;
for(int i=1;i<num;i++){
if(num%i==0)
add+=i;
}
if(add==num)
printf("perfect no");
else printf("not a perfect no");

break;

case 3:
int rev,n=num;
for(;num;num/=10){
int temp=num%10;
 rev=rev*10+temp;
}
if(rev==n)
printf("palindrome no");
else
printf("not a palindrome");
break;
case 4:
int i,c;
for(i=2,c=0;i<num;i++){
if(num%i==0)
break;
}
if(i==num)
printf("prime no");
else printf("not a prime");
break;
case 5:
int temp=num,d=0,dig;
for(;temp;temp/=10)
d++;
int sum=0;
for(temp=num;temp;temp/=10){
 dig=temp%10;
int power=1;
for(int i=0;i<d;i++)
power=power*dig;
sum=sum+power;
}
if(sum==num)
printf("armstrong no");
else printf("not a armstrong no");
break;
case 6:
for(int i=1;i<=num;i++){
if(num%i==0)
printf("%d ",i);
}
break;
case 7:
for(int i=0;i<num;i++){
for(int s=0;s<num-i-1;s++)
printf("  ");
for(int j=0;j<2*i+1;j++){
if(i==num-1||j==0||j==2*i)
printf("* ");
else printf("  ");
}
printf("\n");
}
break;
default:
printf("invalid options");
}
}
 
