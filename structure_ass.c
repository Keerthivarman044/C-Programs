/*WAP to perform following task using structure. 
1) allocate dynamic memory for n student’s data
 2) store data using run time input
 3) print the data based on requirement :
 a) design function to print rollno , name and marks of student whose rollno is even number.
 b) design function to print rollno and marks of student whose name’s first and last letter is vowel.
 c) design function to print mark of student whose names length pow of 2 number.
 d) design function to print name of student who got highest marks.
 e) design function to print rollno and name of student whose marks abr between 45 to 85.
 f) design function to print rollno , name and marks of student who failed (marks < 35) in exam.
input : 6 
1 abi 45
2 keerthii 67
3 arthi 88
4 varman 97
5 amaran 83
6 sandhiya 32 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
int rollno;
char name[20];
float marks;
}v;
typedef struct stu student;
void dma(int,student **);//completed
void str_data(int,student **);//completed
void  prt_even(int,student **);//completed
void prt_vowel(int,student **);//completed
void prt_pow(int,student **);//completed
void prt_highmrk(int,student **);//completed
void prt_btw(int,student **);//completed
void prt_fail(int,student **);
void main(){
student *p,*q;
int n,i,j;
printf("Enter no of students: \n");
scanf("%d",&n);
dma(n,&p);
str_data(n,&p);
printf("THE OUTPUTS ARE \n /////////////\n");
prt_even(n,&p);
prt_vowel(n,&p);
prt_pow(n,&p);
prt_highmrk(n,&p);
prt_btw(n,&p);
prt_fail(n,&p);
}
void dma(int n,student**p){
    *p=malloc(sizeof(student*)*n);
}
/////////////
void str_data(int n,student **p){
int i;
   for(i=0;i<n;i++)
    p[i]=malloc(sizeof(student));
for(i=0;i<n;i++)
    scanf("%d %s %f",&p[i]->rollno,&p[i]->name,&p[i]->marks);
}
//////////////
void prt_even(int n,student**p){
int i;
printf("\n prt_even : \n");
for(i=0;i<n;i++){
    if(p[i]->rollno%2==0)
        printf("%d %s %.2f \n",p[i]->rollno,p[i]->name,p[i]->marks);
}
}
/////////////
void prt_vowel(int n,student **p){
int i;
char *q,*st,*name;
printf("\n prt_vowel: \n");
for(i=0;i<n;i++){
       name=p[i]->name;
    q=name +strlen(name)-1,st=name;
    if(( *st=='a'||*st=='e'||*st=='i'||*st=='o'||*st=='u')&&( *q=='a'||*q=='e'||*q=='i'||*q=='o'||*q=='u'))
      printf("%d %.2f \n",p[i]->rollno,p[i]->marks);
}
}
/////////////
void prt_pow(int n,student **p){
int i,pow,len;
printf("\n prt_pow: \n");
for(i=0;i<n;i++){
len=strlen(p[i]->name);
if((len &(len-1))==0)
printf("%.2f \n",p[i]->marks);
}
}
/////////////
void prt_highmrk(int n,student **p){
int i,j,max=0;
max=p[0]->marks;
printf("\n  ptr_highmrk: \n");
for(i=1;i<n;i++){
 if(max<p[i]->marks)
        max=p[i]->marks;
}
for(i=0;i<n;i++)
    if(max==p[i]->marks)
    printf("%s\n",p[i]->name);
}
/////////////
void prt_btw(int n,student **p){
int i,marks;
printf("\n prt_btw : \n");
for(i=0;i<n;i++){
    marks=(int)p[i]->marks;
    if(marks>=45 && marks<=85)
        printf("%d %s\n",p[i]->rollno,p[i]->name);
}
}
//////////////
void prt_fail(int n,student **p){
int i,marks;
printf("\n prt_fail: \n");
for(i=0;i<n;i++){
    marks=(int)p[i]->marks;
    if(marks<35)
        printf("%d %s %.2f \n",p[i]->rollno,p[i]->name,p[i]->marks);
}
}























