/*//wap to swap of two numbers using pointers
#include<stdio.h>
int main(){
int a,b,temp;
int *p1,*p2;
scanf("%d %d",&a,&b);
p1=&a;
p2=&b;
printf("before swap\n a=%d b=%d\n",a,b);
temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swap\n a=%d b=%d",a,b); 
}
//wap to find that in wich enidian we are currently working on
#include<stdio.h>
int main(){
int n=10;
char *ptr;//why char *ptr means ->char ptr is help us to check only 1 byte of the data
ptr=(char *)&n;
if(*ptr==10)
printf("littile enidian");
else printf("big enidian");
}
//wap to print integer and float value using pointer
#include<stdio.h>
int main(){
float f=23.5,*fp;
int *ip;
fp=&f;
ip=(int *)&f;
printf("*ip=%d *fp=%f",*ip,*fp);

} 
*/
//wap to print the binary of float
#include<stdio.h>
int main(){
float f;
scanf("%f",&f);
int pos;
int *ip;
ip=(int *)&f;
for(pos=31;pos>=0;pos--)
printf("%d",*ip>>pos&1);
}












