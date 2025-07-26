/*//wap to scan and print the string ellements
#include<stdio.h>
int main(){
char s[20],a[20];
printf("Enter the string:\n");
scanf(" %s %[^\n]",s,a);
printf("%s\n",s);
printf("%s\n",a);
}
//wap to scan and print one by one elements in the string
#include<stdio.h>
int main(){
char s[20];
printf("enter the string: ");
scanf("%s",s);
for(int i=0;s[i];i++)
printf("%c ",s[i]);
}

//wap to calculate the length of the string
#include<stdio.h>
int main(){
char s[20];
scanf("%s",s);
int len;
for(len=0;s[len];len++);
printf("the length of the array is : %d",len);
}

//wap to print the string in the reverse order
#include<stdio.h>
int main(){
char s[20];
int len,i;
printf("Enter the string : ");
scanf("%s",s);
for(len=0;s[len];len++);
for(i=len-1;i>=0;i--)
printf("%c",s[i]);
printf("\n");
}
//wap to reverse the contant in the string
#include<stdio.h>
void main(){
char s[20],t;
int i,j,len;
scanf("%s",s);
printf("%s\n",s);
for(len=0;s[len];len++);
for(i=0,j=len-1;i<j;i++,j--){
t=s[i];
s[i]=s[j];
s[j]=t;
}
printf("%s\n",s);
}
//wap to check the one specific character is present in the string or not
#include<stdio.h>
void main(){
char s[20],ch;
int i;
scanf("%s",s);
scanf(" %c",&ch);
for(i=0;s[i];i++){
if(s[i]==ch)
{
printf("char is present");
return;
}
}
printf("char not found");
}


//wap to count the digit and the vovels in the string
#include<stdio.h>
void main(){
char s[20];
int d=0,c=0,i;
scanf("%s",s);
for(i=0;s[i];i++){
if(s[i]>='0'&&s[i]<='9')
d++;
if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
c++;
}
printf("Digits:%d vovels:%d",d,c);
}
//wap to convert the lower case into upper case
#include<stdio.h>
void main(){
char s[20];
int i;
scanf("%s",s);
for(i=0;s[i];i++){
if(s[i]>='a'&& s[i]<='z')
s[i]=s[i]-32;
}
printf("%s\n",s);
}

//wap to copy the value of the string to another string
#include<stdio.h>
int main(){
char s[20],d[20];
int i;
scanf("%s",s);
for(i=0;s[i];i++)
d[i]=s[i];
d[i]=s[i];//d[i]='\0' or d[i]=0
printf("%s",d);
}
//wap to concat of two strings
#include<stdio.h>
void main(){
char s[20],d[20];
int ld,i,j;
scanf("%s %s",s,d);
for(ld=0;s[ld];ld++);
for(i=0,j=ld;d[i];i++,j++)
s[j]=d[i];
s[j]='\0';
printf("%s",s);
}

//wap to compare two strings and print equal or not
#include<stdio.h>
int main(){
char s[20],d[20];
int i;
scanf("%s %s",s,d);
for(i=0;s[i]&&d[i];i++){
if(s[i]!=d[i])
break;
}
if(s[i]==d[i])
printf("both are same");
else printf("not same");
}
*/
//wap to find plaindrome or not
#include<stdio.h>
void main(){
char s[20],d[20],t;
int i,j,len;
scanf("%s",s);
for(len=0;s[len];len++);
for(i=0;s[i];i++)
d[i]=s[i];
d[i]='\0';
for(i=0,j=len-1;i<j;i++,j--){
t=d[i];
d[i]=d[j];
d[j]=t;
}
printf("%s",d);
printf("\n");
for(i=0;s[i]&&d[i];i++)
if(s[i]!=d[i])
break;
if(s[i]==d[i])
printf("palindrome\n");
else printf("not a palindrome\n");
}








































