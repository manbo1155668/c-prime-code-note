#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include<assert.h> 
#include<stdlib.h>
//int main()
//{
//	int n=5;
//	int* p=(int *)calloc(n,sizeof(int));
//	assert(p!=NULL);
//	if(p==NULL)
//	{
//		printf("call失败");
//		return -1;
//	}
//	for(int i=0;i<n;i++)
//	{
//		*(p+i)=i+1;
//	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d",p[i]);
//	 } 
//	 free(p);
//	 p=NULL;
//	return 0;
//}
//int main()
//{
//	int n=9;
//	int* p=(int*)malloc(n*sizeof(int));
//	assert(p!=NULL);
//	if(p==NULL)
//	{
//		printf("失败\n");
//		return -1;
//	}
//	for(int i=0;i<n;i++)
//	{
//		*(p+i)=i+1;
//	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d",*(p+i));
//	 } 
//	 printf("\n");
//	 free(p);
//	return 0;
// } 
//enum tra
//{
//	red,
//	green,
//	yellow
// } ;
// int main()
// {
// 	enum tra light=red;
// 	for(int i=0;i<4;i++)
// 	{
// 		switch(light)
// 		{
// 			case red:
// 				printf("红灯\n"); 
// 				light=green;
// 				break;
// 			case green:
// 				printf("绿灯\n");
// 				light=yellow;
// 				break;
// 			case yellow:
// 				printf("黄灯\n");
// 				light=red;
// 				break;
//		 }
//	 }return 0; 
//} 
//enum manbo
//{
//	manb,
//	man,
//	bo
// } ;
// int main()
// {
// 	printf("%d\n",manb);
// 	printf("%d\n",man);
// 	printf("%d\n",bo);
// 	printf("%d\n",manb);
// 	return 0;
// }枚举 
//typedef struct student
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}stu;
//int main()
//{
//	stu s={"manbo",10,"cat","11335588"};
//	printf("%s\n",s.name) ;
//	printf("%d\n",s.age) ;
//	printf("%s\n",s.sex) ;
//	printf("%s\n",s.id) ;
//	return 0;
//}
//char* my_strcpy(char* dest,const char*src)
//{
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	char* tmp =dest;
//	while(*src !='\0')
//	{
//		*dest=*src;
//		src++;
//		dest++;
//	}
//	*dest ='\0';
//	return tmp;
//}
//int main()
//{
//	 char dest[15];
//	 const char* src="asdfgh";
//	 char* ret=my_strcpy(dest,src); 
//	 printf("%s\n", ret);
//	 return 0;
//}
//int main()
//{
//	char a[15]="hajimi";
//	const char* b=" manbo";
//	strcat(a,b);
//	printf("%s",a);
//	return 0;
//}
//int main()
//{
//	char a[15];
//	const char* n="manbo";
//	strcpy(a,n);
//	printf("%s",a);
//	return 0;  
// } 

//int main()
//{
//	int a=0;
//	scanf("%d",&a);
//	int aa=0;
//	do
//	{
//		aa++;
//		a=a/10;
//		}	
//		while(a);
//		printf("%d",aa);
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char c='0';
//	if(isalpha(c))
//	printf("%c是zimu",c) ;
//	else
//	printf("%cbu是zimu",c) ;
//	return 0;
// } 
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int*ptr=(int*)(&a+1);
//	printf("%d,%d"，*(a+1),*(ptr-1));
//	  0; 
//}
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	short*p=(short*)arr;
//	int i=0;
//	for(i=0;i<4;i++)
//	{
//		*(p+i)=0;
//	}
//	for(i=0;i<5;i++)
//	printf("%d ",arr[i]);
//	return 0; 
//}
//int main()
//{
//	int manbo[]={6,7,8,9,10};
//	int* man;
//	man=manbo;
//	*(man +3)+=3;
//	printf("%d，%d\n",*man,*(man +3));
//	return 0; 
//	
//}
//void swap(int *pa,int *pb)
//{
//	int tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;	
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d,b=%d",a,b);
//	swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int *p1=&a;
//	int *p2=&b;
//	printf("a=%d ,b=%d ",a,b);
//	swap(a,b);
//	printf("a=%d,b=%d",*p2,*p1); 
//}
//int* func()
//{
//	static int a=10;
//	return &a; 
// } 
//int main()
//{	
//	int *ret=func();
//	printf("%d\n",*ret);
//	return 0;
//}
//{ 
//	int n=0x11223344;//32 位数字 
//	int *p=&n;
//	printf("%x",*p); 
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int *p=&a;
//	printf("%d ",&a);
//	printf("%d ",p);
//	return 0;
// } 
//int fib(int n)
//{if(n==1||n==2){
//	return 1;}
//	return fib(n-1)+fib(n-2);
//}
//int main()
//{
//	int ret=fib(8);
//	printf("%d\n",ret);
//	return 0; 
//}
//int fac(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	 } 
//	 int ret=n*fac(n-1);
//	 return ret;
//}
//int main()
//{int ret=fac(5);
//printf("%d\n",ret);0
//return 0;
//}
//int main()
//{
//	int n=0;
//	int a=1;
//	int i=0;
//	printf("输入数求阶乘\n");
//	scanf("%d",&n);
//	for(i=n;i>0;i--)
//	{
//		a*=i;
//	}
//	printf("%d",a);
//	return 0;
// } 
//void test()
//{
//	static int i=0;
//	i++;
//	printf("%d ",i);
//}
//int main()
//{
//	int i=0;
//	for(i=0;i<5;i++)
//	{
//		test();
//	 } 
//	return 0; 
//}
//int manboyear(int year)
//{
//	if(year%4==0&&year%100!=0||year%400==0)
//	{return 1;
//	}
//	return 0;
//}
//int main() 
//{
//	int year;
//	printf("输入年份\n");
//	scanf("%d",&year);
//	if(manboyear(year))
//	{
//		printf("manbo\n");
//		
//	}
//	else
//	{
//		printf("hajimi\n");
//	}
//	return 0;
// } 结束
//{
//	printf("hhhh\n");
//	goto manbo;
//	printf("aabb\n");
//	manbo:
//		printf("manbo\n");
//		return 0;
//}
//{	int arr [10]={0};
//int i=0 ;
//for (i=0;i<10;i++)
//{
//	scanf("%d",&arr[i]);
//}
//for (i=0;i<10;i++)
//{
//	printf("%d",arr[i]); 
//}
//return 0;
//}结束 
//{
//	int day;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//		printf("manbo\n");
//		break;
//	case 4:
//		printf("man\n");
//		break; 
//	defult:
//		printf("majimi\n"); 
//		break;
//	}	
//	return 0;结束 
//int i, j;
//
//    for (i = 1; i <= 10; i++) {
//        for (j = 1; j <= 10; j++) {
//            int a = i * j;              
//            printf("%d*%d=%-2d ", i, j, a);
//
//            if (a == 100) {             //  判断循环
//                printf("\nmanbo\n");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}结束 
//int a=0;
//int b=0;
//printf("输入二数求最大公因数\n");
//scanf("%d%d",&a,&b);
//int c=a%b;
//
//while (c!=0)
//{
//	a=b;
//	b=c;
//	c=a%b;
//}
// printf("%d\n",b);
// return 0;
//}结束 
//int i=0;
//int a=0;
//for(i=1;i<101;i++)
//{	
//	if(i%10==9)
//		a++;
//	if(i/10==9)
//		a++;
//}
//	printf("%d",a);
//	return 0;}
//int i=0;
//for(i=1;i<=100;i++)
//{
//	if(i%5!=0&& i%6!=0)
//	{
//		break;}
//	else
//	{	printf("%d",i);	}
//	
//	}
//return 0;}结束 
//int arr[5]={1,2,3,4,5};
//int len=sizeof(arr)/sizeof(arr[0]);
//int i=0;
//int j=len-1;
//while (i<j)
//{
//	int tmp= arr[i]; 
//	arr[i]=arr[j];
//	arr[j]=tmp;
//	i++;
//	j--; 
//}
//	for(int i=0;i<len;i++)
//	{
//		printf("%d"),arr[i];
//		
//	}
//	return 0;}结束 

