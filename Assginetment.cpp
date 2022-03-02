#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int luachon;
do{

printf("\n----------Menu------------\n");
	printf("1.Bai 1: In ra cac so chan, le nho hon n\n");
	printf("2.Bai 2: Tinh tong cap so cong\n");
	printf("3.Bai 3: Tinh tong phan so den 1/n\n");
	printf("4.Bai 4:  Tong cap so cong chan le\n");
	printf("5.Bai 5: Tinh tong giai thua\n");
	printf("6.Bai 6: Tim cac so khong lon hon n chia het cho 7\n");
	printf("7.Bai 7: Liet ke cac uoc so cua mot so cho truoc\n");
	printf("8.Bai 8: Tim uoc chung lon nhat, boi chung nho nhat\n");
	printf("9.Bai 9: Kiem tra so nguyen to\n");
	printf("10.Bai 10: Phan 1 so tich thành thua so nguyen to\n");
	printf("11.Bai 11: Hien chua co\n");
	printf("12.Bai 12: Kiem tra so thuan nghich\n");
	printf("13.Bai 13: Tinh n!\n");
	printf("14.Bai 14: Tinh tong cac chu so\n");
	
	printf("\n----------------------\n");
	printf("Nhap lua chon cua ban:");
	scanf("%d",&luachon);
	switch(luachon){
	case 1:{
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		if(i % 2 == 0){
		printf("\ncac so chan nho hon n la %d ",i);
}else{
	printf("\tCac so le be hon n la %d",i);
}
}
break;
}
	case 2:{
	int n;
	int S;
	int L;
	int i = 1; 
	printf("Nhap n:");
	scanf("%d",&n);
	while(i<=n){
		L =(n - 1)/1+1;
		S = ((n + 1)*L)/2;
		i++;
}
	printf("Tong cua day so 1 + 2 + 3+...+%d = %d ",n,S);


		break;
}

	case 3:{
	int n;
	float S = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n < 1)
	printf("Xin hay nhap lai");
	
	for(int i  = 1; i <=n;i++){
	S = S + 1.0/i;
}
	printf("Tong cua day so 1 + 1/2 + 1/3+...+1/%d= %.3f",n,S);
break;
}

case 4:{


	int n;
	int S = 0;
	int Schan = 0;
	int Sle = 0;
	printf("Nhap n:");
	scanf("%d",&n);
/*a*/
for(int i = 0; i< n;i++){
	printf("+Cac so tu nhien be hon n la:%d\n",i);
	S +=i;
}
printf("+Tong cac so tu nhien be hon n la:%d\n",S);	
		
/*b*/
for(int i = 0;i < n; i++){
	if(i % 2 !=0){
	printf("+Cac so le la:%d\n",i);
	Sle += i;
	}
}
printf("+Tong cac so le la:%d\n",Sle);

/*c*/for(int i = 0;i<n;i++){
	if(i % 2 == 0){
		printf("+Cac so chan la:%d\n",i);
		Schan += i;
	}
}
printf("+Tong cac so chan nho hon n la:%d\n",Schan);
break;
}

case 5:{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int i = 1,S = 0;
	long long L = 1;//tinh giai thua
	while(i<=n){
		L = L * i;
		S= S + L;
		i++; 
}
printf("Tong cua day so giai thua la %d\n",S);
break;
}
case 6:{
	int n;
	long long S = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i = 7; i <= n; i+=7){
		S +=i;
	}
	printf("Tong cua cac so chia het cho 7 la %lld",S);
	break;
}


case 7:{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i = 1; i<=n;i++){
		if(n%i==0){
			printf("Cac so tu nhien la uoc cua n la %d\n",i);
		}
	}
break;
}
case 8:{
	int a,b;
	do{
	printf("Nhap hai so (a va b)>0 la:");
	scanf("%d%d",&a,&b);
}while(a<0||b<0);
if(a == 0|| b == 0){
	printf("Khong co BCNN chi co UCLN la:%d\n",(a==0)?b:a);
}else{
	int bc = a*b;
	while(b!= 0){
		int x = b;
		b = a%b;
		a = x;	
	}
	printf("UCLN = %d\n",a);
	printf("BCNN = %d\n",bc/a);
}
break;
}


case 9:{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n < 2)
	printf("So nay ko phai la so nguyen to!");
else{
	int x = 1;
	for(int i = 2; i<=sqrt(n);i++){
		if(n % i == 0){
		return 0;
		}
	}	
	if(x ==1)
	printf("%d la so nguyen to\n",n); 
	else
		printf("%d khong phai la 1 so nguyen to\n",n);
}
return 0;
break;
}

case 10:{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n < 2)
	printf("Hay nhap lai");
	else{
	  for(int i = 2;n > 1;){
		if(n % i == 0){
			printf("%d",i);
			if(n != i){
				printf("x");
			}
			n/=i;
		}else{
			i++;
		}
}
}
break;
}

case 11:{
//int Fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//    int n;
//    printf("nhap n: ");
//    scanf("%d", &n);
//    printf("So Fibonacci thu %d la: %d", n, Fibonacci(n));
//    return 0;
//}
	break;
}

case 12:{
	

	int n;
	int Daoso = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	int m = n;
	while(m > 0){
		Daoso = Daoso*10 + m % 10;
		m/=10; 
}
	if(Daoso == n){
		printf("Day la so thuan nghich %d",n);
	}else{
		printf("Day la so ko thuan nghich\n");
	}
	return 0;
break;
}
case 13:{
	int n;
	do{
	printf("Nhap n:");
	scanf("%d",&n);
    }while(n<0);
	int gt = 1;
	for(int i=n; i>=1;i--){
		gt*=i;
	}
	printf("in ra n! = %d",gt);
	

	break;
}
case 14:{
	int n;
	int S = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	while(n > 0){
		S = S  + n%10;
		n/=10;
	}
	printf("Tong cua cac so la:%d",S);
	break;
}
}

}while(luachon !=0);
getch();
}





