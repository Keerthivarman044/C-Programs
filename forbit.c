
//wap to right rotation of the bits
#include<stdio.h>
int main(){
unsigned int num;
int pos,i,n,m,ro;
scanf("%u %d",&num,&ro);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
for(i=0;i<ro;i++){
m=num&1;
n=num>>1;
if(m)
num=n|1<<31;
}
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}

//wap to left rotate the digit
#include<stdio.h>
int main(){
unsigned int num;
int pos,i,m,n,ro;
scanf("%u %d",&num,&ro);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
for(i=0;i<ro;i++){
m=num&1<<31;
n=num<<1;
if(m)
num=n|1<<0;
}
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}

//wap to perform both the roataion based on the user requirment
#include<stdio.h>
int main(){
unsigned num;
int pos,i,ro,m,n;
printf("enter the number: ");
scanf("%u",&num);
printf("\nenter no rotation:");
scanf("%d",&ro);
int op;
printf("\npress 1 for left rotation\npress 2 for right rotation");
scanf("%d",&op);
printf("\n before rotation\n");
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
if(op==1){
printf("\nleft rotation is going to perform");
for(i=0;i<ro;i++){
m=num&1;
n=num>>1;
if(m)
num=n|1<<31;
}
}
else if(op==2){
printf("\nrigt rotation is going to perform");
for(i=0;i<ro;i++){
m=num&1<<31;
n=num<<1;
if(m)
num=n|1<<0;
}
}
else 
printf("\ninvalid opration");
printf("\nafter rotation\n");
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}

//wap to reverse the bytes
#include<stdio.h>
int main(){
unsigned num;
int i,j,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
for(i=0,j=31;i<j;i++,j--)
if((num>>i&1)!=(num>>j&1)){
num=num^1<<i;
num=num^1<<j;
}
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}
//wap to reverse the nipple
#include<stdio.h>
int main(){
int num,i,j,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
for(i=4,j=23;i<7;i++,j--)
if((num>>i&1)!=(num>>j&1)){
num=num^1<<i;
num=num^1<<j;
}
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}

























