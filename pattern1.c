
//wap to print square pattern
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
printf("* ");
printf("\n");
}
}

//wap to print triangle pattern
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++)
printf("* ");
printf("\n");
}
}

//wap to print inverted triangle pattern
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++)
printf("%d ",i+1);
printf("\n");
}
}

// wap to printf hallow square pattern
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if((i==0)||(i==n-1)||(j==0)||(j==n-1))
printf("%d ",i+1);
else 
printf("  ");
}
printf("\n");
}
}
//wap to print pramyid pattern
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int s=0;s<n-i-1;s++)
printf("  ");
for(int j=0;j<2*i+1;j++)
printf("* ");
printf("\n");
}
}

//wap to print inverted pramyid
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int s=0;s<i;s++)
printf("  ");
for(int j=0;j<(2*n)-(2*i)-1;j++)
printf("* ");
printf("\n");
}}

//wap for the following pattern
//
//1
//1 2
//1 2 4 
//1 2 4 7
//1 2 4 7 11 
#include<stdio.h>
int main(){
int n,sum;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0,sum=1;j<i+1;j++){
sum=sum+j;
printf("%d ",sum);
}
printf("\n");
}
}

//wap for the given patteern
//1
//1 4
//1 4 9
//1 4 9 16
//1 4 9 16 25
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=1;j<=i+1;j++)
printf("%d ",j*j);
printf("\n");
}
}

//wap for the given pattern
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++)
if(j%2==0)
printf("1 ");
else
printf("0 ");
printf("\n");
}
}
//wap to print the pattern
//a
//a b
//a b c
//a b c d
//a b c d e
#include<stdio.h>
int main(){
int n,ch;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0,ch='a';j<i+1;j++,ch++)
printf("%c ",ch);
printf("\n");
}
}

//wap to print the pattern
//1 2 3 4 5
//a b c d
//1 2 3
//a b
//1
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++){
if(j%2==0)
printf("%d ",1+j);
else
printf("%c ",'a'+i);
}
printf("\n");
}
}
//wap to print this pattern
//1
//1 3
//1 3 5
//1 3 5 7
#include<stdio.h>
int main(){
int n,sum;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0,sum=1;j<i+1;j++,sum++ )
printf("%d ",sum+j);
printf("\n");
}
}

//wap to print this pattern
//2
//2 4
//2 4 6
//2 4 6 8
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=1;j<=i+1;j++)
printf("%d ",j*2);
printf("\n");
}
}
//wap to print this pattern
12345
1234
123
12
1
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++)
printf("%d ",j+1);
printf("\n");
}
}
//wap to print this pattern
1 3 5 7 9
  3 5 7 9
    5 7 9
      7 9
        9

#include<stdio.h>
int main(){
int n,sum;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int s=0;s<i;s++)
printf("  ");
for(int j=2*i+1;j<2*n;j+=2)
printf("%d ",j);
printf("\n");
}
}
//wap to print thi pattern
A
A *
A * C
A * C *
A * C * E

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++){
if(j%2==0)
printf("%c ",'a'+j);
else
printf("* ");
}
printf("\n");
}
}
//wap to print this pattern
* * * * * *
1 3 5 7 9
* * * *
1 3 5
* *
1

#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n-i;j++){
if(i%2==0)
printf("* ");
i
else
printf("%d ",2*j+1);
}
printf("\n");
}
}
//wap to print the following pattern
A 1 B 2 C
A 1 B 2
A 1 B
A 1
A

#include<stdio.h>
int main(){
int n,sum,ch;
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0,sum=1,ch='a';j<n-i;j++)
if(j%2==0){
printf("%c ",ch);
ch++;
}
else {
printf("%d ",1+j-sum);
sum++;
}
printf("\n");
}
}
//wap to print the following pattern
5
* *
5 4 3
* * * *
5 4 3 2 1
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
if(i%2==0){
for(int j=n;j>=n-i;j--)
printf("%d ",j);
}
else
for(int j=0;j<i+1;j++){
printf("* ");
}
printf("\n");
}
}

































