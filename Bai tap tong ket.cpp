#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Pi 3.14159
/*bai1*/
/*int main(){
	printf("hello word");
}*/

/*bai2*/
/*int main(){
	int n;
	printf("\nNhap n: ");
	scanf("%d",&n);
	if(n%2==0&&n>0){
	printf("Day la so chan\n");
	printf("Day la so duong\n");
}
	else{
	printf("Day la so le\n");
	printf("Day la so am\n");
	}
}*/

/*bai3*/
// int main(){
// 	int a,b;
// 	printf("Nhap 2 so nguyen a va b:\n");
// 	scanf("%d%d",&a,&b);
// 	printf("Tong la %d+%d=%d\n",a,b,a+b);
// 	printf("hieu la %d-%d=%d\n",a,b,a-b);
// 	printf("Tich la %d*%d=%d\n",a,b,a*b);
// 	if(b>0){
// 		printf("Thuong la %d/%d=%d\n",a,b,a/b);
// 	}
// }

/*bai4*/
//int main(){
//	int a,b;
//	printf("Nhap so a va b:");
//	scanf("%d%d",&a,&b);
//
//	if(a>b){
//		printf("a la so lon nhat\n");
//	}
//	else if(a < b){
//		printf("b la so lon nhat\n");
//	}else{
//		printf("a va b bang nhau:\n");
//	}
//}

/*bai5*/
//int main(){
//	int a,b,c,d;
//	printf("Nhap 4 so ta co:");
//	scanf("%d%d%d%d",&a,&b,&c,&d);
//	int max = a;
//	if(a>b && a>c && a>d)
//{
//	max=a;
//	printf("so lon nhat la %d",max);
//	
//}
//else if(b>a && b>c&&b>d)
//{
//	max=b;
//	printf("so lon nhat la %d",max);
//	
//   }
// else if(c>a && c>b && c>d)
//    {
//	max=c;
//	printf("so lon nhat la %d",max);
//
//}
//else if(d>a && d>b && d>c ){
//	max=d;
//	printf("so lon nhat la %d",max);
//      }
//                    else {
//	            printf(" khong co so lon nhat");
//        }
//            return 0;
//}

/*bai6*/
//int main(){
//	int chieudai;
//	int chieurong;
//	printf("Nhap chieu dai:");
//	scanf("%d",&chieudai);
//	printf("\nNhap chieu rong:");
//	scanf("%d",&chieurong);
//	printf("Chu vi hinh chu nhat la:\n");
//	printf("(%d*%d)/2=%d\n",chieudai,chieurong,(chieudai*chieurong)/2);
//	printf("Dien tich hinh chu nhat la:\n");
//	printf("%d*%d=%d",chieudai,chieurong,chieudai*chieurong);
//}
//	

/*bai7*/
//int main(){
//  	int R;
//  	float chuvi,dientich;
//	printf("Ban kinh duomg tron la:");
//	scanf("%d",&R);
//	chuvi = 2*Pi*R;
//	dientich = Pi*R*R;
//	printf("Chu vi cua duong tron la %f\n",chuvi);
//	printf("Dien tich cua duong tron la %f\n",dientich);
//	getch();
//	
//} 

/*Bai8*/
//int main(){
//	float a,b;
//	printf("Nhap hai so a va b la:");
//	scanf("%f%f",&a,&b);
//	if(a>0){
//	float x = -b/a;
//	printf("\nKet qua tinh duoc la %.2f",x);
//	}
//	else if(a==0||b==0){
//		printf("phuong trinh vo so nghiem");
//	}
//	else{
//	printf("\nKhong giai duoc");
//	}
//	
//}

/*bai9*/
//int main(){
//	int a,b,c;
//	int delta;
//	printf("Nhap a,b,c:");
//	scanf("%d%d%d",&a,&b,&c);
//	delta = b*b - 4*a*c;
//	printf("Delta = %d\n",delta);
//	if(delta > 0){
//		printf("\n-----------------\n");
//		printf("%dx^2 +%dx + %d\n",a,b,c);
//		printf("Phuong trinh co hai no\n");
//		float x1 = (-b + sqrt(delta))/(2*a);
//		float x2 = (-b - sqrt(delta))/(2*a);
//		printf("\nta co no thu nhat cua phuong trinh la:%.2f",x1);
//		printf("\nta co no thu hai cua phuong trinh la:%.2f",x2);
//
//	}
//	else if(delta == 0){
//		printf("\n----------------\n");
//		printf("%dx^2 + %dx+ %d\n",a,b,c);
//		printf("Phuong trinh co no kep la\n");
//		float x12 = -b/(2*a);
//		printf("No cua phuong trinh la: %.2f",x12);
//	}
//	else if(delta < 0){
//		printf("%dx^2 +%dx +%d\n",a,b,c);
//		printf("\nPhuong trinh vo no");
//	}
//getch();
//}

/*bai10*/
//int main(){
//	int a,b,c;
//	printf("Nhap chieu dai cac canh cua hinh tam giac la:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>0&&b>0&&c>0){
//		if(a<b+c && b<a+c && c<a+b){
//			if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
//			printf("Day la tam giac vuong\n");
//			else if(a==b && b==c)
//				printf("Day la tam giac deu\n");
//			else if(a==b || a==c || b==c)
//				printf("Day la tam giac can\n");
//			else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)
//				printf("Day la tam giac tu\n");
//		}
//		else
//			printf("Day la tam giac nhon\n");
//		
//}
//getch();
//	
//}


