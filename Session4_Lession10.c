#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap so nguyen thu nhat : ");
	scanf("%d", &a);
	printf("Moi ban nhap so nguyen thu hai : ");
	scanf("%d", &b);
	printf("Moi ban nhap so nguyen thu ba : ");
	scanf("%d", &c);
	if(a>b && b>c){
		printf("%d%d%d",c ,b ,a);
	} else if(a>c && c>b){
		printf("%d%d%d",b ,c ,a);
	} else if(b>a && a>c){
		printf("%d%d%d",c ,a ,b);
	} else if(b>c && c>a){
		printf("%d%d%d",a ,c ,b);
	} else if(c>a && a>b){
		printf("%d%d%d",b ,a ,c);
	} else {
		printf("%d%d%d",a ,b ,c);
	}
	return 0;
}
