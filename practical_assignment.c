/*WAP to swap third and seventh nibble of given int using bitwise operator.

Ex:

int num=1234;

before binary :  | 0000 | 0000 | 0000 | 0000 | 0000 | 0100 | 1101 | 0010 |

after binary :      | 0000 | 0100 | 0000 | 0000 | 0000 | 0000 | 1101 | 0010 |
*/
#include<stdio.h>
int main(){
int num,i,j,pos;
scanf("%d",&num);
for(pos=31;pos>=0;pos--){
printf("%d",num>>pos&1);
if(pos%4==0)
printf(" ");
}
for(i=8,j=24;i<12;i++,j++){
if(num>>i&1 != num>>j&1){
num=num^1<<i;
num=num^1<<j;
}
}
printf("\n");
for(pos=31;pos>=0;pos--){
printf("%d",num>>pos&1);
if(pos%4==0)
printf(" ");
}
printf("\n");
}










