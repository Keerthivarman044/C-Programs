//1.sum of digits
#include<stdio.h>
int main(){
int num,sum=0;
scanf("%d",&num);
l1:
int temp=num%10;
sum=sum+temp;
num/=10;
if(num)
goto l1;
printf("%d",sum);
}
//2.sum of odd numbers
#include<stdio.h>
int main(){
int num,sum=0;
scanf("%d",&num);
int temp;
l1:
 temp=num%10;
if(temp%2!=0)
sum=sum+temp;
num/=10;
if(num)
goto l1;
printf("sum of odd:%d",sum);
}
//3.sum of even numbers
#include<stdio.h>
int main(){
int num,temp,sum=0;
scanf("%d",&num);
l1:
temp=num%10;
if(temp%2==0)
sum=sum+temp;
num/=10;
if(num)
goto l1;
printf("sum of even no:%d",sum);
}
//4.sum of digit more than 5
#include<stdio.h>
int main(){
int num,sum=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp>5)
sum+=temp;
num/=10;
if(num)
goto l1;
printf("%d",sum);
}
//5.sum of digit less than 7
#include<stdio.h>
int main(){
int num,sum=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp<7)
sum=sum+temp;
num/=10;
if(num)
goto l1;
printf("%d",sum);
}
//6.sum of digit b/w 3 to 8
#include<stdio.h>
int main(){
int num,sum=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp>3&&temp<8)
sum+=temp;
num/=10;
if(num)
goto l1;
printf("sum =%d",sum);
}
//7.count odd digit in num
#include<stdio.h>
int main(){
int num,c=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp%2!=0)
c++;
num/=10;
if(num)
goto l1;
printf("odd count=%d",c);
}
//8.count of even digit more than 4
#include<stdio.h>
int main(){
int num,c=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp%2==0 && temp>4)
c++;
num/=10;
if(num)
goto l1;
printf("even count more than 4:%d",c);
}

//9.count the digit
#include<stdio.h>
int main(){
long int num,c=0,temp;
scanf("%ld",&num);
l1:
temp=num%10;
c++;
num/=10;
if(num)
goto l1;
printf("%ld",c);
}
//10.count odd digit more than 3 and less 8 of given num
#include<stdio.h>
int main(){
int num,c=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp%2!=0 && temp>3&&temp<8)
c++;
num/=10;
if(num)
goto l1;
printf("%d",c);
}
//11.count even digit bw 1 and 7 of the given num
#include<stdio.h>
int main(){
int num,c=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
if(temp%2==0&&temp>1&&temp<7)
c++;
num/=10;
if(num)
goto l1;
printf("%d",c);
}
// 12.sum of last 3 digits of a given number
#include<stdio.h>
int main(){
int num,c=0,sum=0,temp;
scanf("%d",&num);
l1:
if(c<3){
temp=num%10;
c++;
sum=sum+temp;
num/=10;

goto l1;}
printf("%d",sum);
}
//13.sum of last 3 odd digit
#include<stdio.h>
int main(){
int num,sum=0,c=0,temp;
scanf("%d",&num);
l1:
if(c<3){
temp=num%10;
if(temp%2!=0){
sum=sum+temp;
c++;
}
num/=10;
goto l1;
}
printf("%d",sum);
}
//14.print last 3 digit
#include<stdio.h>
int main(){
int num,c=0,temp;
scanf("%d",&num);
l1:
if(c<3){
temp=num%10;
c++;
printf("%d",temp);
num/=10;
goto l1;
}
}
//15.print first digit in given no
#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
l1:
if(num>=10){//because 1 digits should equal or less then 10
num/=10;
goto l1;
}
printf("%d",num);
}
//16.reverse a no
#include<stdio.h>
int main(){
int num,rev=0,temp;
scanf("%d",&num);
l1:
temp=num%10;
rev=rev*10+temp;
num/=10;
if(num)
goto l1;
printf("%d",rev);
} 



































