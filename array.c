//wap to print the prime no in the array
#include<stdio.h>
int main(){
int n,i,c=0,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(int i=0;i<n;i++){
for(j=2;j<arr[i];j++){
if(arr[i]%j==0)
break;
}
if(arr[i]==j){
printf("%d ",arr[i]);
c++;
}
}
printf("\nc=%d",c);
}

//wap to scan the elements of the array only if the elements are prime
#include<stdio.h>
int main(){
int n,i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;){
scanf("%d",&arr[i]);
for(j=2;j<arr[i];j++){
if(arr[i]%j==0)
break;
}
if(arr[i]==j)
i++;
}

for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
//wap to  reverse the element in the array
#include<stdio.h>
int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("before: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
for(i=0,j=n-1;i<j;i++,j--){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf("\nafter: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
//wap to reverse the first half and the second half of the given array
#include<stdio.h>
int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("before: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
for(i=0,j=n/2;j<n;i++,j++){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf("\nafter: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]); 

}
//wap to swap the adjecent element in the array
#include<stdio.h>
int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("before: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
for(i=0,j=1;i<n;i+=2,j+=2){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf("\nafter: ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}

//wap to arrange the elements in accending order of an array using bubble short
#include<stdio.h>
int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
//implementing the bubble short logic
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}

//wap to arrange the elements in decending order of an array using bubble short
#include<stdio.h>
int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
//implementing the bubble short logic
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(arr[j]<arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}
//wap to arrange the elements of an array in acending order using selection short
#include<stdio.h>
int main(){
int i,j,n,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
//implimenting the logic of selection short
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i]>arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}

//wap to arrange the elements of an array in decending order using selection short
#include<stdio.h>
int main(){
int i,j,n,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
//implimenting the logic of selection short
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
}

//wap to find the largest element in the array
#include<stdio.h>
int main(){
int n,i,l,sl;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
if(arr[0]>arr[1]){
l=arr[0];
sl=arr[1];
}
else if(arr[i]<arr[i+1]){
l=arr[1];
sl=arr[0];
}
else{
l=0,sl=0;
for(i=0;i<n;i++){
if(arr[i]>l){
sl=l;
l=arr[i];
}
else if(arr[i]>sl&&arr[i]!=l)
sl=arr[i];
}
}
for(i=2;i<n;i++){
if(arr[i]>l){
sl=l;
l=arr[i];
}
else if(arr[i]>sl&&arr[i]!=l)
sl=arr[i];
}
printf("largest=%d second largest=%d",l,sl);
}


































































































