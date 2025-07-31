WAP in C to scan and print string with space.
i/p: vector india coding sirji , char s[30];
o/p: vector india coding sirji  

#include<stdio.h>
void main(){
char arr[30];
scanf("%[^\n]",arr);
printf("%s",arr);
}

2.WAP in C to find lenght of string using pointer.
i/p: basic_program , char s[20],*p;
o/p: lenght= 13
#include<stdio.h>
void main(){
char s[30]="basic_program";
char *p,len=0;
p=s;
while(*p++)
len++;
printf("len=%d",len);
}
wAP in C to count digits in string using pointer .
i/p: char s[20]=”p6c3s1 123 ok7”;
o/p: count = 7

#include<stdio.h>
int main(){
char s[30]="p6c31s1 123 ok";
char *p;
int c=0;
p=s;
while(*p++){
if(*p>='0'&& *p<='9')
c++;
}
printf("%d",c);
}
WAP in C to print ascii , octal , hex of given string.
i/p : char s[10]=”program” ;
o/p : p --> 112 160 70
r --->
#include<stdio.h>
int main(){
char s[10]="program";
char *p;
p=s;
printf("%d %o %x",*p,*p,*p);
}
WAP in C to add digits in string using char pointer.
i/p: char s[20]= “123 hello by6” , *cp;
o/p: sum= 12
#include<stdio.h>
int main(){
char s[20]="123 hello by6";
char *cp;
int sum=0;
cp=s;
while(*cp){
if(*cp>='0'&&*cp<='9')
sum+=*cp-'0';
*cp++;
}
printf("sum=%d\n",sum);
}
WAP in C to print binary of all char in string .
i/p: char s[20]=”12 ab AB”;
o/p:
#include<stdio.h>
void main(){
char s[20]="12 ab AB";
char*p;
int pos;
p=s;
while(*p){
for(pos=7;pos>=0;pos--){
printf("%d",*p>>pos&1);
}
printf(" ");
printf("<-%d ",*p);
p++;
}
}
WAP in C to count set bit all char in string.
i/p: char s[10]=”bcd”;
o/p: 3 4 3

#include<stdio.h>
int main(){
char s[10]="bcd";
char *p;
int pos,set;
p=s;
while(*p){
set=0;
for(pos=7;pos>=0;pos--){
if(*p>>pos&1)
set++;
}
printf("%d ",set);
p++;
}
}
WAP in C to check string lenght is prime or not.
i/p: char s[10]= ”pawan”;
o/p: yes 5 is prime number

#include<stdio.h>
void main(){
char s[10]="varman";
char *p;
p=s;
int len=0,i;
while(*p++)
len++;
for(i=2;i<len;i++){
if(len%i==0)
break;
}
if(len==i)
printf("yes %d is prime",len);
else printf("no %d is not prime",len);
}
WAP in C to check string lenght is strong or not.
i/p: char s[10]= ”vector”;
o/p: 6 is not strong number

#include<stdio.h>
int main(){
char s[10]="vector";
char *p;
int i,sum=0,j,len=0,dig,fact;
p=s;
while(*p++)
len++;
for(i=len;i;i/=10){
dig=i%10;
for(j=1,fact=1;j<dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==len)
printf("%d is a strong num",len);
else printf("%d is not a strong num",len);
}
WAP in C to reverse string using while loop .
i/p: char s[10]=”gnidoc 321”;
o/p: 123 coding
#include<stdio.h>
int main(){
char s[10]="gnidoc 321";
int len,i;
for(len=0;s[len];len++);
for(i=len-1;i>=0;i--)
printf("%c",s[i]);

}
























