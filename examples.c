 Sum of digit in b/w 3 to 8 .
i/p1: 123 o/p1: 3
i/p2: 276 o/p2: 13

#include<stdio.h>
int main(){
int n,temp,sum=0,dig;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
if(dig>=3&& dig<=8)
sum=sum+dig;
}
printf("%d ",sum);

}
Count even digit more than 4
i/p1: 123 o/p1: 0
i/p2: 2076 o/p2: 1

#include<stdio.h>
int main(){
int n,i,temp,dig,c=0;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
if(dig%2==0&&dig>4)
c++;
}
printf("%d",c);
}
 Sum of last 3 odd digit .
i/p1: 96312 o/p1: 13
i/p2: 57235 o/p2: 15
#include<stdio.h>
int main(){
int dig, n,temp,c=0,sum=0;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
if(dig%2!=0&&c<3){
sum=sum+dig;
c++;
}}
printf("%d %d",sum,c);
}
Reverse digit more than 5.
i/p1: 963 o/p1: 69
i/p2: 27851 o/p2: 87

#include<stdio.h>
int main(){
int n,temp,rev=0,dig;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
if(dig>5){
rev=rev*10+dig;
}
}
printf("%d",rev);
}
Print middle digit .
i/p1: 96412 o/p1: 4
i/p2: 1725 o/p2: 2 or 7

#include<stdio.h>
int main(){
int n,temp,dig,rev,d=0,c=0;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
c++;
}
int mid=c/2;
for(temp=n;temp;temp/=10){
dig=temp%10;
if(d==mid)
printf("%d",dig);
d++;
}
}
Sum of 1st and 2nd last
digit of given any int num .
i/p1: 93321 o/p1: 11
i/p2: 277637 o/p2: 5

#include<stdio.h>
int main(){
int n,temp,i=0,rev=0,sum=0,c=0,dig;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
if(c==1)
sum=sum+dig;
c++;
}
dig=0;
dig=rev%10;
sum=sum+dig;
printf("%d",sum);

}
print 3 to power 4 .
o/p: 3*3*3*3 // 81

#include<stdio.h>
int main(){
int num,n,i,pro=1;
scanf("%d%d",&num,&n);
for(i=0;i<n;i++){
pro=pro*num;
}
printf("%d",pro);
}

//wap to print the given  number is strong number or not
#include<stdio.h>
int main(){
int n,i,sum=0,fact,j,temp,dig;
scanf("%d",&n);
for(temp=n;temp;temp/=10){
dig=temp%10;
for(i=1,fact=1;i<=dig;i++)
fact=fact*i;
sum=sum+fact;
}
if(sum==n)
printf("strong no");
else printf("not a strong no");
}
//wap to print the strong numbers within the limits
#include<stdio.h>
int main(){
int start,end,i,temp,fact,sum,dig;
scanf("%d %d",&start,&end);
for(i=start;i<=end;i++){
sum=0;
for(temp=i;temp;temp/=10){
dig=temp%10;
fact=1;
for(int j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==i)
printf("%d ",i);
}
}
























































