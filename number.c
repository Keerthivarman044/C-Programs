/*
//wap to print prime no in given limit
#include<stdio.h>
int main(){
int num,sum=0,i,c=0;
for(num=64;c<7;num++){
for(i=2;i<num;i++){
if(num%i==0)
break;
}
if(num==i){
c++;
if(c==3||c==6){
printf("%d ",num);
sum+=num;
}
}
}
printf("\n%d sum= %d ",c,sum);
}
//wap to print alternate prime no of the given range
#include<stdio.h>
int main(){
int num,i,j,end,c=0;
scanf("%d %d",&num,&end);
for(i=num;i<end;i++){
for(j=2;j<i;j++){
if(i%j==0)
break;
}
if(i==j){
c++;
if(c%2==0)
printf("%d ",i);
}
}
}
//wap to print and count  the palindrome no of a given range
#include<stdio.h>
int main(){
int num,end,i,temp,temp1,c=0,rev;
scanf("%d %d",&num,&end);
for(i=num;i<end;i++){
rev=0;
for(temp1=i;temp1;temp1/=10){
temp=temp1%10;
rev=rev*10+temp;
}
if(rev==i){
c++;
if(c%2==0)
printf("%d ",rev);
}
}
printf("\n%d ",c);
}

//wap to print perfect numbers from the given range
#include<stdio.h>
int main(){
int num,sum,end,i,j,c=0;
scanf("%d %d",&num,&end);
for(i=num;i<end;i++){
sum=0;
for(j=1;j<i;j++){
if(i%j==0)
sum+=j;
}
if(i==sum){
c++;
printf("%d ",sum);
}
}
printf("\n%d",c);
}

//wap to print fibonacci series from 0 to 31
#include<stdio.h>
int main(){
int a=0,b=1,c,end;
scanf("%d",&end);
printf("%d %d",a,b);
for(int i=2;i<end;i++){
c=a+b;
if(c<31){
printf(" %d ",c);
a=b;
b=c;
}
}
}

//WAP in C to print multiplication table from 2 to 9
2 x 1 = 2	3 x 1 = 3	4 x 1 = 4	5 x 1 = 5	6 x 1 = 6	7 x 1 = 7	8 x 1 = 8	9 x 1 = 9	
2 x 2 = 4	3 x 2 = 6	4 x 2 = 8	5 x 2 = 10	6 x 2 = 12	7 x 2 = 14	8 x 2 = 16	9 x 2 = 18	
2 x 3 = 6	3 x 3 = 9	4 x 3 = 12	5 x 3 = 15	6 x 3 = 18	7 x 3 = 21	8 x 3 = 24	9 x 3 = 27	
2 x 4 = 8	3 x 4 = 12	4 x 4 = 16	5 x 4 = 20	6 x 4 = 24	7 x 4 = 28	8 x 4 = 32	9 x 4 = 36	
2 x 5 = 10	3 x 5 = 15	4 x 5 = 20	5 x 5 = 25	6 x 5 = 30	7 x 5 = 35	8 x 5 = 40	9 x 5 = 45	
2 x 6 = 12	3 x 6 = 18	4 x 6 = 24	5 x 6 = 30	6 x 6 = 36	7 x 6 = 42	8 x 6 = 48	9 x 6 = 54	
2 x 7 = 14	3 x 7 = 21	4 x 7 = 28	5 x 7 = 35	6 x 7 = 42	7 x 7 = 49	8 x 7 = 56	9 x 7 = 63	
2 x 8 = 16	3 x 8 = 24	4 x 8 = 32	5 x 8 = 40	6 x 8 = 48	7 x 8 = 56	8 x 8 = 64	9 x 8 = 72	
2 x 9 = 18	3 x 9 = 27	4 x 9 = 36	5 x 9 = 45	6 x 9 = 54	7 x 9 = 63	8 x 9 = 72	9 x 9 = 81	

#include<stdio.h>
int main(){
int num,end,i,j,pro=1;
scanf("%d %d",&num,&end);
for(i=1;i<=end;i++){
for(j=num;j<=end;j++){
printf("%d x %d = %d  ",j,i,i*j);
}
printf("\n");
}
}
*/
//wap to print factorial of the number
#include<stdio.h>
int main(){
int num,i,fact=1;
scanf("%d",&num);
for(int i=1;i<=num;i++){
fact=fact*i;
printf("%d ",i);
}
printf("%d",fact);
}
























