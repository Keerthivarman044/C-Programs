/*WAP in C to scan and print string with space.
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
WAP in C to reverse first 3 letter from string .
i/p: char s[10]=”gnidoc coding ”;
o/p: ingdoc coding
#include<stdio.h>
void main(){
char s[20]="gnidoc coding";
char *p,*q,t;
p=s;
q=p+2;
printf("%s\n",s);
for(int i=0;i<3;i++){
t=*p;
*p=*q;
*q=t;
}
printf("%s ",s);
}
 WAP in C to delete desired char from string.
i/p:char s[20]=”acbcccab” , ch = ‘c’
o/p: abab
#include<stdio.h>
void main(){
char s[20]="acbcccab",ch='c';
int i,len,j;
for(len=0;s[len];len++);
for(i=0;i<len;i++){
if(s[i]==ch){
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}
}
printf("%s",s);

}
 WAP in C to delete desired char only 2 times
from right side of given string using while loop.
i/p: char s[20]=”abcccababc” , ch= ‘c’
o/p: abccabab
#include<stdio.h>
int main(){
char s[20]="abcccababc",ch='c';
int i,len,j,count=0;
for(len=0;s[len];len++);
for(i=len-1;i>=0;i--){
if(s[i]==ch&&count<2){
for(j=i;s[j];j++){
s[j]=s[j+1];
count++;
}}}
printf("%s ",s);
}
WAP in C to delete 0th index char from string.
i/p: char s[20]=”coding sirji”;
o/p: oding sirji

#include<stdio.h>
int main(){
char s[20]="coding sirji";
int i,len;
for(len=0;s[len];len++);
for(i=0;i<len;i++)
s[i]=s[i+1];
printf("%s",s);
}

WAP in C to delete first 3 char from string.
i/p: char s[10]=”armstrong num”
o/p: strong num
#include<stdio.h>
void main(){
char s[20]="armstrong num";
int i,len;
for(len=0;s[len];len++);
for(i=0;i<len;i++){

s[i]=s[i+3];
}
printf("%s",s);
}

#include<stdio.h>
int main(){
char s[20]="armstrong num",*p;
p=s+3;
printf("%s",p);
}
 WAP in c to delete digits from string .
i/p: char s[20]=”covid19 a12b”;
o/p: covid ab

#include<stdio.h>
void main(){
char s[20]="covid19 a12b";
int len,i,j;
for(len;s[len];len++);
for(i=0;i<len;i++){
if(s[i]>='0'&&s[i]<='9'){
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}
}
printf("%s",s);
}
WAP in C to delete prime digit from string.
i/p: char s[20]=”abc3456 567abc”;
o/p: abc46 6abc
#include<stdio.h>
int main(){
char s[20]="abc3456 567abc";
int i,j,len,n,k;
for(len=0;s[len];len++);
for(i=0;i<len;i++){
if(s[i]>='0'&&s[i]<='9'){
n=s[i]-'0';
for(j=2;j<n;j++)
if(n%j==0)
break;
if(n==j){
for(k=i;s[k];k++)
s[k]=s[k+1];
i--;
}
}}
printf("%s",s);
}
 WAP in C to insert a char at 2nd index in string .
i/p: char s[10]=”abcdef” , in=2 , ch=’9’;
o/p: ab9cdef

#include<stdio.h>
void main(){
char s[10]="abcdef",ch='9';
int in=2,i,j,len;
for(len=0;s[len];len++);
for(i=len;i>in;i--)
s[i]=s[i-1];
s[in]=ch;
printf("%s",s);
}
WAP in C to insert ‘p’ at 0th pos in same string .
i/p: char s[10]=”123456”, ch=’p’;
o/p: p123456
#include<stdio.h>
int main(){
char s[10]="123456",ch='p';
int i,len,in=0;
for(len=0;s[len];len++);
for(i=len;i>in;i--)
s[i]=s[i-1];
s[in]=ch;
printf("%s ",s);
}
 WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st
index in same string  .
i/p: char s[10]=”123456”
o/p: pq123456
#include<stdio.h>
void main(){
char s[10]="123456",ch1='p',ch2='q';
int i,in1=0,in2=1,len;
for(len=0;s[len];len++);
for(i=len;i>=0;i--)
s[i+2]=s[i];
s[in1]=ch1;
s[in2]=ch2;
printf("%s",s);
}
 WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st
 index in same string using goto .
 i/p: char s[10]=”123456”
 o/p: pq123456
#include<stdio.h>
int main(){
char s[10]="123456",ch1='p',ch2='q';
int i,in1=0,in2=1,len;
for(len=0;s[len];len++);
i=len;
l1:
if(i>=0){
s[i+2]=s[i];
i--;
goto l1;
}
s[in1]=ch1;
s[in2]=ch2;
printf("%s ",s);
}
WAP in C to count words in given string using goto.
i/p:char s[20]=”hi 5 #$2 cs”;
o/p: word count= 4
#include<stdio.h>
int main(){
char s[20]="hi 5 #$2 cs";
int i,len,c=0;
for(len=0;s[len];len++);
for(i=0;i<len;i++){
if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
c++;
}
printf("count=%d ",c); 
}
WAP in C to Capitalize first letter of word in string.
i/p: char s[30]= “pawan coding sirji ”
o/p: Pawan Coding Sirji
#include<stdio.h>
int main(){
char s[30]="varman coding king";
int i,len;
for(len=0;s[len];len++);
printf("%s \n",s);
if(s[0]>='a'&&s[0]<='z')
s[0]=s[0]-32;
for(i=1;i<len;i++){
if(s[i-1]==' '&& s[i]>='a'&&s[i]<='z')
s[i]=s[i]-32;
}
printf("%s ",s);
}
WAP in C to print all word lenght in string .
i/p: char s[20]= ”vector india pvt ”
o/p: 6 5 3
#include<stdio.h>
int main(){
char s[20]="vector india pvt";
int len,i,c=0;
for(len=0;s[len];len++);
for(i=0;i<len;i++){
if(s[i]!=' ')
c++;
else {
printf("%d ",c);
c=0;
}
}
if(c>0)
printf("%d ",c);
}
WAP in C to print first word from string.
i/p: char s[20]=”vector india pvt”;
o/p: vector

#include<stdio.h>
int main(){
char s[20]="vector india pvt";
int i,len;
for(len;s[len];len++);
for(i=0;i<len;i++){
printf("%c",s[i]);
if(s[i]==' ')
break;
}
}
WAP in C to print last word from string 
i/p: char s[20]=”vector india coding ”;
o/p: coding*/
#include<stdio.h>
int main(){
char s[20]="vector india coding";
int i,len,st=0;
for(len=0;s[len];len++);
for(i=0;i<len;i++){
if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0')
st=i+1;
}
for(i=st;s[i];i++)
printf("%c ",s[i]);
}































