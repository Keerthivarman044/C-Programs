/*
//sum of two differnt numbers
#include<stdio.h>
int main(){
int num1,num2;
scanf("%d %d",&num1,&num2);
printf("%d\n",num1+num2);
}

// sum of only 2 digits
#include<stdio.h>
int main(){
int num,temp,sum=0;
scanf("%d",&num);
temp=num%10;
sum+=temp;
num/=10;
sum+=num;
printf("%d",sum);
}

//reverse the 2 digit number
#include<stdio.h>
int main(){
int num,rev=0,temp;
scanf("%d",&num);
temp=num%10;
rev=rev*10+temp;
num/=10;
rev=rev*10+num;
printf("%d",rev);
}

//wap to sum 3 digit num
#include<stdio.h>
int main(){
int num,sum=0,temp;
scanf("%d",&num);
temp=num%10;
sum=sum+temp;
num/=10;
temp=num%10;
sum+=temp;
num/=10;
sum+=num;
printf("%d",sum);
}

//wap to delete last two digit from the num
#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
num=num/10;
num=num/10;
printf("%d",num);
}

//wap to print ascii hex oct value of the char
#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
printf("ascii=%d\nhexa=%x\noct=%o",ch,ch,ch);
}

//wap to the given math formula (a+b)^2=a^2+2ab+b^2
#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d",(a*a)+(2*(a*b)+(b*b)));
}
//wap to the given math formula(a+b)^3=a^3+3a2b+3ab2+b3
#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d",(a*a*a)+(3*((a*a)*b))+(3*(a*(b*b)))+(b*b*b));
}
//wap to set the specific bit
#include<stdio.h>
int main(){
int num,pos;
scanf("%d %d",&num,&pos);
printf("%d",num|1<<pos);
}

//wap to clear the specific bits 
#include<stdio.h>
int main(){
int num,pos1,pos2;
scanf("%d %d %d",&num,&pos1,&pos2);
num=num &~(1<<pos1);
num=num &~(1<<pos2);
printf("%d",num);
}*/
//wap to toggle a specific bit
#include<stdio.h>
int main(){
int num,pos1,pos2;
scanf("%d %d %d",&num,&pos1,&pos2);
num=num^1<<pos1;
num=num^1<<pos2;
printf("%d",num); 
}








































