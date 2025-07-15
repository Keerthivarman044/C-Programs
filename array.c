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
//wap to find the largest element in given array
#include<stdio.h>
int main(){
int n,i,j,large,index;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
large=arr[0];
index=0;
for(i=1;i<n;i++){
    if(arr[i]>large){
        large=arr[i];
        index=i;
    }
}
printf("\nlargest=%d index=%d",large,index);
}






















































































