#include<stdio.h>
int main(){
	int date, month, year;
	printf("Moi ban nhap nam : ");
	scanf("%d", &year);
	printf("Moi ban nhap thang : ");
	scanf("%d", &month);
	printf("Moi ban nhap ngay : ");
	scanf("%d", &date);
	if((year%4==0 && year%100!=0) || (year%400==0)) {
		switch(month){
			case 1:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 2:
				if(date<30 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 3:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 4:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 5:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 6:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 7:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 8:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 9:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 10:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 11:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 12:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
	 }
	} else{
				switch(month){
			case 1:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 2:
				if(date<29 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 3:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 4:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 5:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 6:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 7:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 8:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 9:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 10:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 11:
				if(date<31 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
			case 12:
				if(date<32 && date>0){
					printf("Hop le");
				} else{
					printf("Khong hop le");
				}
				break;
	}
}
    return 0;
}
