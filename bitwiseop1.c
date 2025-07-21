/*#include<stdio.h>
  int main(){
  int a,b,result;
  printf("enter two no for operations : ");
  scanf("%d %d",&a,&b);
  result=a&b;
  printf("\nAND=%d",result);
  result=a|b;
  printf("or=%d\n",result);
  result=a^b;
  printf("xor%d\n",result);
  result=~a;
  printf("compliment=%d\n",result);
  result=~b;
  printf("compliment b=%d\n",result);
  result=a<<b;
  printf("ls=%d\n",result);
  result=a>>b;
  printf("rs=%d\n",result);
  }
//wap in c to print the binary integer .
#include<stdio.h>
int main(){
int n,i,pos;
scanf("%d",&n);
printf("%d\n",n);
for(pos=31;pos>=0;pos--)
printf("%d ",n>>pos&1);
}
//wap to swap the first and last nibbles in short array
#include<stdio.h>
int main(){
short int num;
int pos,i,n,m,j;
scanf("%hd",&num);
printf("%hd\n",num);
for(pos=16;pos>=0;pos--)
printf("%d",num>>pos&1);
for(i=0,j=16;i<4;i++,j--){
if(((num>>i)&1)!=((num>>j)&1)){
num=num^1<<i;
num=num^1<<j;
}
}
printf("\n%hd\n",num);
for(pos=16;pos>=0;pos--)
printf("%d",num>>pos&1);
}

//wap to reverse the bits of the given char
#include<stdio.h>
int main(){
char ch;
int pos,i,j;
scanf("%c",&ch);
for(pos=7;pos>=0;pos--)
printf("%d",ch>>pos&1);
printf("\n");
for(i=0,j=7;i<j;i++,j--){
if((ch>>i&1)!=(ch>>j&1)){
ch=ch^1<<i;
ch=ch^1<<j;
}
}
printf("%d\n",ch);
for(pos=7;pos>=0;pos--)
printf("%d",ch>>pos&1);
}

//wap to find the num is divisable by 8 or not using binary and bitwise and ternery operator
#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	((num&7)==0)?printf("yes\n"):printf("no\n");
}
//wap to rotate the bits of given short int num
#include<stdio.h>
int main(){
short int num;
int m,n,pos,i,j,ro;
scanf("%hd %d",&num,&ro);
for(pos=15;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
for(i=0;i<ro;i++){
m=num&1;
num=num>>1;
if(m){
num=num|1<<15;
}
}
for(pos=15;pos>=0;pos--)
printf("%d",num>>pos&1);
}
//wap to delete no of bit from a particular
#include<stdio.h>
int main()
{
int num,n,m,bit,pos,i;
scanf("%d%d%d",&num,&bit,&pos);
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
m=num&((1<<pos)-1);
n=num>>(pos+bit);
n=n<<pos;
int result=m|n;
printf("\n");
for(i=31;i>=0;i--)
printf("%d",result>>i&1);
printf("\n%d",result);
}
//wap to reverse 1 st to 6 bit
#include<stdio.h>
int main(){
unsigned int num;
int i,pos,j,n,m;
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
for(i=0,j=31;i<6;i++,j--){
if((num>>i&1)!=(num>>j&1)){
num=num^(1<<i);
num=num^(1<<j);
}
printf("\n");}
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}


// wap to print the peime factors of the given number
#include<stdio.h>
int main(){
int num,i,j;
scanf("%d",&num);
printf("prime factors: ");
for(i=2;i<num;i++){
if(num%i==0){
for(j=2;j<i;j++){
if(i%j==0)
break;
}
if(i==j)
printf("%d ",i);
}}
}

//wap to set first nibble ,clear 2nd nibble,toggle 3rd nibble without loop;
eg->i/p unsigned short int k=0xA5F0
its binary : 1010 0101 1111 0000
op binary :1010 1010 0000 1111

#include<stdio.h>
int main(){
unsigned short int num=0xA5F0;
int pos;
for(pos=15;pos>=0;pos--)
printf("%hd",num>>pos&1);
num=(num|0x000f);
num=(num^0x0f00);          ;
num=(num&0xff0f);
printf("\n");
for(pos=15;pos>=0;pos--)
printf("%hd",num>>pos&1);
}
//wap to sum of even digit of given number
ip=7722494 op=12

#include<stdio.h>
int main(){
int num,sum=0,temp,dig;
scanf("%d",&num);
for(temp=num;temp;temp/=10){
dig=temp%10;
if((dig & 1 )==0)
sum=sum+dig;
}
printf("%d",sum);
}

wap in c to count set bit,then,check the count is prime num or not .

#include<stdio.h>
int main(){
int num,setbit=0,i,j,temp;
scanf("%d",&num);
for(i=31,temp=num;i>=0;i--){
temp=((num>>i)&1);
if(temp==1)
setbit++;
}
printf("%d\n",setbit);
for(j=2;j<setbit;j++){
if(setbit%j==0)
break;
}
if(setbit==j)
printf("yes Prime\n");
else 
printf("no prime");
}

//wap in c to print find the product of odd digits
52347 

#include<stdio.h>
int main(){
int num,temp,dig,i,pro=1;
scanf("%d",&num);
for(temp=num;temp;temp/=10){
dig=temp%10;
if(dig%2!=0)
pro=pro*dig;
}
printf("%d",pro);
}

wap to print the perfect numbers from the given range
ip=2 to 1000  op=6,28,496

#include<stdio.h>
int main(){
int start,end,i,j,sum;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++){
sum=0;
for(j=1;j<i;j++){
if(i%j==0)
sum=sum+j;
}

if(sum==i)
printf("%d ",i);
}
}
//wap to print the palindrome number at given range

#include<stdio.h>
int main(){
int start,end,i,j,rev,temp,dig;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++){
rev=0;
for(temp=i;temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
}
if(rev==i)
printf("%d ",i);
}
}

wap to print the strong number at the given range

#include<stdio.h>
int main(){
int start,end,i,j,fact,sum,temp,dig;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++){
sum=0;
for(temp=i;temp;temp/=10){
dig=temp%10;
fact=1;
for(j=1;j<=dig;j++)
fact=fact*j;
sum=sum+fact;
}
if(sum==i)
printf("%d ",i);
}
}

wap to print the fibonacci series

#include<stdio.h>
int main(){
int a=0,b=1,c,end;

printf("%d %d ",a,b);
for(int i=2;i;i++){
c=a+b;
if(c>31)
break;
printf("%d ",c);
a=b;
b=c;
}
}
wap to delete the given num

#include<stdio.h>
int main(){
int num,dle,temp,dig,rev=0;
scanf("%d %d",&num,&dle);
for(temp=num;temp;temp/=10){
dig=temp%10;
if(dig==dle)
continue;
rev=rev*10+dig;
}
for(temp=rev;temp;temp/=10){
dig=temp%10;
printf("%d",dig);
}
}

wap in c to shift odd digit right side in the num
*/
#include<stdio.h>
int main(){
int num,even=0,odd=0,i,temp,dig,rev=0;
scanf("%d",&num);
for(temp=num;temp;temp/=10){
dig=temp%10;
rev=rev*10+dig;
}
for(temp=rev;temp;temp/=10){
dig=temp%10;
if(dig%2==0)
even=even*10+dig;
else
odd=odd*10+dig;
}
int result=even*100+odd;
printf("%d ",result);
}




































































































