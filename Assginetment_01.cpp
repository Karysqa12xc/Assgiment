#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
void vetraitim(int m,int n){
	for(int i = 1; i<7; i++){
		for(int j = 1; j<=7;j++){
			if(((i == 1&&(j == 1|| j == 4 || j ==7))
			||(i == 4&&(j == 1||j==7))
			||(i == 5&&(j<=2||j>=6))
			||(i == 6&&(j<=3||j>=5)))){
			printf("   ");
			}else{
				printf(" * ");
			}
		}
		printf("\n");
}
}
bool thuannghich(int k){
	int l = k;
	int dao = 0;
	while(k > 0){
		dao = dao * 10 + k % 10;
		k /=10;
	}
	return dao == l;
}
bool chiahet(int n, int k){
	if(k == 0){
		return false;
	}
	return n % k == 0;
}

bool nguyento(int n){
	if(n < 2)
		return false;
	for(int i = 2; i<= sqrt(n);i++){
		if( n % i == 0){
			return false;
		}
	}	
	return true;
	
}

int tinhtong(int n){
	int S = 0;
	while(n>0){
		S =S +n%10;
		n/=10;
	}
	return S;
}
int Demchuso(int n){
	int dem = 0;
	while(n > 0){
		dem++;
		n/=10;
}
return dem;
}
int demchusole(int n){
	int sole = 0;
	int m;
	while(n>0){
		m = n % 10;
		if(m % 2!= 0){
			sole++;
		}
		n/=10;
	}
	return sole;
}
float trungbinhcong(int n){
	float tb = 0;
	int size = Demchuso(n);
	int S = 0;
	while(n > 0){
	S +=n%10;
	n/=10;
	}
	tb = (float)S / size;
	return tb;	
}
bool ascending(int n){
	int a,b;
	a =n%10;
	n/=10;
	while(n>0){
	b =n % 10;
	n/=10;
	if(b > a){
	return false;
	}
	a=b;
}
return true;
}
int firstdigit(int n){
	int digit;
	while(n>0){
	digit = n%10;
	n/=10;
	}
	return digit;
}
int countfirstdigit(int n){
	int first =firstdigit(n);
	int count =0;
	int aDigit;
	while(n > 0){
		aDigit = n%10;
		n/=10;
		if(aDigit == first){
			count++;
		}
	return count;
}
}
void Timuoc(int n){
	int i;
	for(i=1; i<=sqrt(n);i++){
		if(n % i == 0){
			printf("%d\t\n",i);
			printf("%d\t\n",n/i);
		}
	}

}
void demuoc(int n){
	int count = 0;
	for(int i =1; i<= sqrt(n);i++){
		if(n%i ==0){
			count+=2;
		}
}
	printf("%d\t\n",count);
}
void Uocsonguyento(int n){
	for(int i = 1;i<=sqrt(n);i++){
		if(n %i==0){
			if(nguyento(i)){
				printf("%d\t",i);
			}
			if(nguyento(n/i)){
				printf("%d\t",n/i);
			}
		}
	}
}
void countfirstngto(int n){
	int i = 2;
	while(n >0){
		if(nguyento(i)){
			printf("%d\t",i);
			n--;
		}
		i++;
	}
}

void fibonacci(int n){
	long long f1=1,f0 =0,fn;
	int i;
	for(i=0;i<n; i++){
		if(i<=1){
			fn = i;
		}
		else{
			fn = f1+f0;
			f0 =f1;
			f1 = fn;
		}
		printf("F%d =%lld\n",i,fn);
	}
}
void lietkesochinhphuong(int n){
	for(int i =0;i<=n;i++){
		printf("%d\t",i*i);
	}
}
bool Chicochusongto(int n){
	int c;
	while(n>0){
		c =n %10;
		n/=10;
		if(!nguyento(c)){
			return false;
		}
	}
	return true;
}

bool khongcoso6(int n){
	int c;
	while(n > 0){
		c=n%10;
		n/=10;
		if(c == 6){
			return false;
		}
}
return true;
}
int pascal(int k,int n){
	if(k == 0|| k==n){
		return 1;
	}else{
		return pascal(k - 1,n-1)+pascal(k,n-1);
	}
}
int sochan(int n){
	return n % 2 == 0;	
}
bool khongtang(int n){
	int i =10000;
	int a,b;
	a =n/i;
	n = n % i;
	i/=10;
	while(n>0){
	b = n/i;
	n=n%i;
	i/=10;
	if(a<b){
		return false;
	}
	a=b;
	}
}
bool khonggiam(int n){
	int i =10000;
	int a,b;
	a=n/i;
	n =n%i;
	i/=10;
	while(n>0){
	b=n/i;
	n =n%i;
	i/=10;
	if(a > b){
		return false;
	}
	a = b;
	}
}
void lkesochankhongtang(){
	for (int i =11111;i<=99999;i++){
	if(sochan(i)&&khongtang(i)){
		printf("%10d",i);
	}
	}
}
void lkesolekhonggiam(){
	for (int i =11111;i<=99999;i++){
		if(!sochan(i)&&khonggiam(i)){
			printf("%10d",i);
		}
	}
}
bool kiemtratong(int n){
	int chan=0;
	int le=0;
	int c;
	while(n>0){
		c = n % 10;
		if(sochan(c)){
			chan+=c;
		}else{
			le+=c;
		}
		n/=10;
	}
	return le == chan;
}
void lkechanlebangnhau(){
	for (int i =11111;i<=99999;i++){
		if(kiemtratong(i)){
			printf("%10d",i);
		}
	}
}
int main(){
	int luachon;
	printf("1.Bai 1:Ve hinh chu nhat bang chu so\n");
	printf("2.Bai 2:Ve hinh bang chu x\n");
	printf("3.Bai 3:in tam giac vuong bang dau *\n");
	printf("4.Bai 4:Ve tam giac can\n");
	printf("5.Bai 5:Ve tam giac can bang chu so\n");
	printf("6.Bai 6:Ve hinh trai tim bang dau *\n");
	printf("7.Bai 7: So thuan nghich co 8 chu so chia het cho k\n");
	printf("8.Bai 8:Liet ke cac so nguyen to co trong doan [a,b]\n");
	printf("9.Bai 9:Nhap n va tinh tong, phan tich thua so nguyen to\n");
	printf("10.Bai 10:Dem chu so,so le va tinh trung binh cong cac chu so cua mot so\n");
	printf("11.Bai 11:Kiem tra chu so cua n co sap sep theo thu tu tang dan hay khong\n");
	printf("12.Bai 12:Kiem tra va liet ke cac uoc cua so n\n");
	printf("13.Bai 13:Liet ke n so chinh phuong fibonacci\n");
	printf("14.Bai 14:Liet ke cac so thuan nguyen to\n");
	printf("15.Bai 15:Cac so thuan nghich khong chua so 6\n");
	printf("16.Bai 16:Tam giac pascal\n");
	printf("17.Bai 17:Liet ke cac so khong tang,khong giam\n");
	printf("Nhap vao day lua chon cua ban:");
	scanf("%d",&luachon);
	switch(luachon){
		case 1:{
			for(int i = 1; i<=4;i++){
		for(int j = 1; j<=4;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	break;
		}
		case 2:{
			int n,m;
			printf("Nhap hang va cot la:");
			scanf("%d%d",&n,&m);
			for(int i = 1;i<=n;i++ ){
				for(int j =1; j<=m;j++){
					printf("x ",i,j);
				}
				printf("\n");
			}
			break;
		}
		case 3:{
			unsigned int h;
			printf("Nhap h:");
			scanf("%d",&h);
			for(int i =1; i <= h;i++){
				for(int j =1; j<=i;j++){
				
				printf("* ");
				}
			printf("\n");
			}
		break;
		}
		case 4:{
			unsigned int h;
			printf("Nhap h:");
			scanf("%d",&h);
			for(int i = 1;i<=h;i++){
				for(int j =1;j<=2*h;j++){
					if(abs(h - j)<=(i - 1)){
				
					printf(" * ");
					}
					else{
						printf("   ");
					}
				}
				printf("\n");
			}
			break;
		}
		case 5:{
		unsigned int h;
		printf("Nhap h:");
		scanf("%d",&h);
		for(int i = 1; i <= h;i++ ){
			for(int j = 1; j<2*h;j++){
				if(abs(h-j)<=(i-1)){
					printf("%d ",i - abs(h-j));
				}
				else{
					printf("  ");
				}
				
			}
			printf("\n");
		}
			break;
		}
		case 6:{
			int m = 6, n= 7;
			vetraitim(m,n);
			break;
		}
		case 7:{
			int k;
			printf("Nhap k:");
			scanf("%d",&k);
			for( int i =10000000;i<= 99999999;i++){
				if( thuannghich(i) && chiahet(i,k) ){
					printf("%10d",i);
				}
			}
			break;
		}
		case 8: {
		int a, b;
		printf("Nhap a:"); scanf("%d",&a);
 		printf("Nhap b:"); scanf("%d",&b);
		if(a > 0&& b > 0){
			for(a; a<=b; a++){
				if(nguyento(a)){
					printf("%d\t",a);
				}
			}
		}
		
		break;
		}
		case 9:{
			//a
			int n;int S;
			do{
			printf("Nhap n:");
			scanf("%d",&n);}while(n<=0);
			printf("Tong cac chu so la %d\n",tinhtong(n));
			
			if(n < 2)
			printf("Day khong phai la so nguyen to:\n");
			else{
				for(int i = 2; n> 1;){
					if(n % i == 0){
						printf("%d",i);
						if(n!=i){
							printf(" x ");
						}
						n/=i;
						}else{
							i++;
						}
					}
				}
			break;
			}
		case 10:{
			int n;
			do{
				printf("Nhap n:");
				scanf("%d",&n);
			}while(n<=0);
			printf("So luong chu so dem duoc la %d\n",Demchuso(n));
			printf("So luong chu so le la %d\n",demchusole(n));
			printf("Trung binh cong la %0.2f",trungbinhcong(n));
			break; 
		}
		case 11:{
			int n;
			do{
				printf("Nhap n:");
				scanf("%d",&n);
			}while(n<=0);
			if(ascending(n)){
				printf("So do theo thu tu tang dan\n");
			}else{
				printf("So do khong theo thu tu tang dan\n");
			}
			printf("Chu so dau tien la %d\n",firstdigit(n));
			printf("So lan chu so dau tien xuat hien la %d",countfirstdigit(n));
			break;
		}
		case 12:{
			int n;
			do{
				printf("Nhap n:");
				scanf("%d",&n);
			}while(n<=0);
			printf("So uoc cua n la:\n");
			Timuoc(n);
			printf("Cac uoc dem duoc la:");
			demuoc(n);
			printf("Cac uoc nguyen to la:");
			Uocsonguyento(n);
			break;
		}
		case 13:{
			int n;
			do{
				printf("Nhap n:");
				scanf("%d",&n);
			}while(n<=0);
			printf("So nguyen to dau tien la:\n");
			countfirstngto(n);
			printf("\nDay so finbonacci dau tien la\n");
			fibonacci(n);
			printf("So chinh phuong dau tien la:\n");
			lietkesochinhphuong(n);
			break;
		}
		case 14:{
			for( long long i =2000;i<=9999;i++){
				if(nguyento(i)&&Chicochusongto(i)&&nguyento(tinhtong(i))){
					printf("%5lld",i);
				}
			}
			break;
		}
		case 15:{
			int k = 6;
			for(int i = 10000000; i<=99999999;i++){
				if(thuannghich(i)&&chiahet(i,k)&&khongcoso6(i)){
					printf("%10d",i);
				}
			}
			break;
		}
		case 16:{
			int n;
			printf("Nhap n:");
			scanf("%d",&n);
			for(int i = 0; i<=n;i++){
				for(int k = 0;k<=i;k++){
					printf("%5d",pascal(k,i));
				}
				printf("\n");
			}
			break;
		}
		case 17:{
		printf("Cac so chan khong tang la:\n");
		lkesochankhongtang();
		printf("\nCac so le khong giam la:\n");
		lkesolekhonggiam();
		printf("\nTong cac so chan le bang nhau la:\n");
		lkechanlebangnhau();
			break;
		}
	}
getch();

}


	


