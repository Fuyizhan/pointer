#include<stdio.h>
/*int max(int a,int b)
{return a>b?a:b;}
int min(int a,int b)
{return a<b?a:b;}
int ave(int a,int b)
{return (a+b)/2;}
int main()
{
	int a=10,b=20,c;
	int (*pc)(int,int);
	pc=ave;
	int (*p[2])(int,int);
	p[0]=max;
	p[1]=min;
	c=(*pc)(a,b);
	printf("ƽ��ֵ��:%d\n",c);
	c=(*p[0])(a,b);
	printf("���ֵ��:%d\n",c);
	c=(*p[1])(a,b);
	printf("��Сֵ��:%d\n",c);
 } */
 
 
 //a[i]=*p  a[i][j] =*(*(a+i)+j)=*(p[i]+j)
 /*int main()
 {
 	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 	int (*p)[4]=a;
 	int i,j;
 	for(i=0;i<3;i++)
 	for(j=0;j<4;j++)
 	printf("%3d",*(*(p+i)+j));
 	return 0;
 }*/
 //��5��ѧ����ÿ�������ſ��Գɼ�������ÿ��ѧ�����ܷ���ƽ���ɼ�����ѯ��
 //һ���Լ�һ�����ϳɼ����ϸ��ѧ�������ȫ��ѧ���ĳɼ���
 void average(int (*p)[6],int n)
 {
 	int i=0,j=0;
 	printf("ѧ��\t�����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
 	for(i=0;i<5;i++)
 	{
 		int sum=0; 
	 for(j=1;j<=3;j++)
	{
	  *(p[i]+4)+=*(p[i]+j);
	 sum+=*(p[i]+j);
}
    *(p[i]+5)=sum/3;}
    for(i=0;i<5;i++)
	{for(j=0;j<6;j++)
    printf("%d\t",*(p[i]+j));
    printf("\n");
 }}
 void search(int (*p)[6],int n)
 {
 	int i,j,flag;
 	printf("������ͬѧ��\n");
 	for(i=0;i<5;i++)
 	{flag=0;
	 for(j=1;j<4;j++)
 	if(*(p[i]+j)<60)flag=1;
 	if(flag)
 	for(j=0;j<6;j++)
 	printf("%d\t",*(p[i]+j));
	 printf("\n");
	 }
 }
 int main()
 {
 	int score[5][6]={{201101,78,93,82},{201102,67,83,72},{201103,55,83,62},{201104,65,59,70},{201105,80,78,90}};
    average(score,5);
    search(score,5);
  
  return 0;
  } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
