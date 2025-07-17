/*
1.Write a Program in C to set 3rd and 2nd bit .
 i/p: int n= 51 o/p : 63

2. Write a Program in C to set 0th and 5th bit .
i/p: int n= 128 o/p: 161

3. Write a Program in C to clear 3rd and 2nd bit .
i/p: int n= 63 o/p: 51

4.Write a Program in C to toggle 1st and 4th bit .

i/p: int n= 42 o/p: 56

5. Write a Program in C to delete 0th bit .
i/p: int n= 170 o/p: 85
C
6. Write a Program in C to delete 0th, 1st , 2nd bit .
i/p: int n= 511 o/p: 63

7. Write a Program in C to delete 2nd bit .
i/p: int n= 39 o/p: 19

8. Write a Program in C to delete 5th bit .
i/p: int n= 99 o/p: 35

*/
//Write a Program in C to set 3rd and 2nd bit .
  //  i/p: int n= 51 o/p : 63
#include<stdio.h>
int main(){
int num,pos,i,bit_pos1,bit_pos2;
scanf("%d%d%d",&num,&bit_pos1,&bit_pos2);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
num=num|1<<bit_pos1;
num=num|1<<bit_pos2;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}
 //Write a Program in C to clear 3rd and 2nd bit .
  //i/p: int n= 63 o/p: 51
#include<stdio.h>
int main(){
int num,pos,bit_pos1,bit_pos2;
scanf("%d%d%d",&num,&bit_pos1,&bit_pos2);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
num=num&~(1<<bit_pos1);
num=num&~(1<<bit_pos2);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);

}
//Write a Program in C to toggle 1st and 4th bit .
 //i/p: int n= 42 o/p: 56
#include<stdio.h>
int main(){
int num,pos,bit_pos1,bit_pos2;
scanf("%d%d%d",&num,&bit_pos1,&bit_pos2);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
num=num^1<<bit_pos1;
num=num^1<<bit_pos2;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
}
//Write a Program in C to delete 0th, 1st , 2nd bit .
//i/p: int n= 511 o/p: 63

#include<stdio.h>
int main(){
int num,bit,pos;
scanf("%d%d",&num,&bit);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
num=num>>3;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);
}
//Write a Program in C to delete 2nd bit
//i/p: int n= 39 o/p: 19 
//Write a Program in C to delete 5th bit
//i/p: int n= 99 o/p: 35 

#include<stdio.h>
int main(){
unsigned int num;
int n1,n2,pos,bit;
scanf("%d%d",&num,&bit);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d\n",num);

n1=num<<(32-bit);
n1=n1>>(32-bit);
n2=num>>(bit+1);
n2=n2<<(bit);
num=n1|n2;
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n%d",num);
}*/
//wap to swap the alternative digit using bit masking 
#include<stdio.h>
int main(){
unsigned char num,result;
scanf("%hhd",&num);
for(int pos=7;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
int n1=(num&0xAA)>>1;
int n2=(num&0x55)<<1;
result=n1|n2;
printf("%d\n",result);
for(int pos=7;pos>=0;pos--)
printf("%d",result>>pos&1);
}


































