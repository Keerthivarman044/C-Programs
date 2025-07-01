
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













