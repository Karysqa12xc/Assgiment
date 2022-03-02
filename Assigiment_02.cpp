#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>
void nhap(int *a, int *n);
//Bai 1
void minmax(int *a,int n, int *min, int *max);
void hienthiBai1(int *a, int *min2, int *max2);
//Bai 2
void minmax2(int *a, int n, int *min2,int *max2);
void hienthiBai2(int *a,int *min2,int *max2);
//Bai 3
void BubbleSort1(int *a, int n);
void BubbleSort2(int *a, int n);
void hienthiBai3(int *a,int n);
//Bai 4
int DemSo(int *a,int n,int x);
//Bai 5
int DemSo(int *a,int n,int x);
bool CheckSXH(int *b, int n,int x);
int SoGanX(int *a,int n,int x);
void hienthiBai5(int *a, int n, int x,int k);
//Bai 6
void TinhTBCCL(int *a,int n,float *TBCC, float *TBCL);
void hienthiBai6(float TBCC,float TBCL);
//Bai 7
void NhapAB(int *a,int *b);
int TinhTong(int *arr,int n,int a,int b);
//Bai 8
bool CheckDoiXung(int *arr, int n);
//Bai 9
int ChiSo(int *b, int n, int x);
void Sophantuxuathien(int *a,int n);
void hienthiBai9(int *b, int *dem,int n);
//Bai 10
bool SoDaXH(int *arr,int index,int x);
void hienthiBai10(int *arr, int n);
//Bai 11
void RandomArr(int *arr, int *n);
void hienthiBai11(int *arr, int n);
//Bai 12
int nhapK(int k,int n);
void chen(int *arr, int &n, int k,int x);
void hienthiBai12(int *arr, int n);
//Bai 13
int nhapK(int n);
void DeleteEleArr(int *arr,int *n,int k);
void hienthiBai13(int *arr, int n);
//Bai 14
void bubbleSort3(int *arr,int n);
int timvitricanchen(int *arr, int n ,int x);
void Chenkolamthaydoi(int *arr, int n,int k,int x);
void hienthiBai14(int *arr, int n);
//Bai 15
int nhapK(int n);
void Chen2Mang(int *arr, int  *brr, int n, int m);
void hienthiBai15(int *arr, int n);
//Bai 16
void VitriBatdau(int *arr, int startindex, int lenght);
void hienMang(int *arr, int n);
void Columbus(int *arr,int n,int *start, int *end, int *count);
int MaxFromArr(int *start, int *end, int n);
void hienthiBai16(int *arr, int n, int *start, int *end, int count);

void nhap(int *a, int *n){
    do{
        printf("Nhap phan tu cua mang: ");
        scanf("%d",n);
    }while(*n<=0);
    for (int i = 0; i < *n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d",&a[i]);
    }
}
//Bai 1
void minmax(int *a,int n, int *min, int *max){
    for(int i = 1;i<n;i++){
        if(*min > a[i]){
            *min = a[i];
        }
        if(*max<a[i]){
            *max = a[i];
        } 
    }
}
void hienthiBai1(int *a, int *min, int *max){
    if(min == max){
        printf("Khong co min max\n");
    }else{
        printf("\nMin =%d\nMax = %d\n",*min,*max);
    }
}
//Bai 2
void minmax2(int *a, int n, int *min2,int *max2){
    int min,max;
    minmax(a,n,&min,&max);
    for(int i = 0; i<n;i++){
        if(*min2 >a[i] && a[i]!= min){
            *min2 = a[i];
        }
        if(*max2 <a[i] && a[i]!=max){
            *max2 = a[i];
        }
    }
}
void hienthiBai2(int min2,int max2){
    if(min2 == max2){
        printf("Khong co min2, max2\n");
    }else{
        printf("\nMin2= %d\nMax2 = %d\n",min2,max2);
    }
}
//Bai 3
void BubbleSort1(int *a,int n){
    for(int i = 0;i<n-1;i++){
        for(int j = n - 1;j>i;j--){
            if(a[j] < a[j-1]){
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
         }
    }
}
void BubbleSort2(int *a, int n){
    for(int i = 0;i<n-1;i++){
        for(int j = n - 1;j>i;j--){
            if(a[j] > a[j-1]){
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
         }
    }
}
void hienthiBai3(int *a, int n){
    for (int i = 0; i < n;i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
}
//Bai 4
int DemSo(int *a,int n,int x){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == x){
            ++count;
        }
    }
    return count;
}
//Bai 5
int SoGanX(int *a, int n,int x){
    int k = abs(a[0] - x);
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - x)< k)
        {
            k = abs(a[i] - x);
        }
        
    }
    return k;
}
bool CheckSXH(int *b, int n,int x){
    for (int i = 0; i < n; i++)
    {
        if(b[i] == x){
            return false;
        }
    }
    return true;
}
void hienthiBai5(int *a, int n,int x, int k){
    int b[100];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(abs(a[i] - x)  == k && CheckSXH(b,count,a[i])){
                printf("%5d", a[i]);
                b[count++] = a[i];
        }
    }
}
//Bai 6
void TBCCL(int *a, int n, float *TBCC, float *TBCL){
    int Dem = 0;
    int TongC = 0;
    int TongL = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0){
            TongC += a[i];
        }else{
            TongL+= a[i];
            Dem++;
        }
    }
    *TBCC = (Dem == n)? 0:1.0f * TongC/(n - Dem);
    *TBCL = (Dem == 0)? 0:1.0f * TongL/Dem;
}
void hienthiBai6(float TBCC, float TBCL){
    printf("Trung binh cong cua cac so chan la: %0.2f\n",TBCC);
    printf("Trung binh cong cua cac so le la: %0.2f\n",TBCL);
}
//Bai 7
void NhapAB(int *a,int *b){
   do{
       printf("Nhap a<b:");
       scanf("%d%d",a,b);
   }while(*a > *b);
}
int TinhTong(int *arr,int n,int a,int b){
    int Tong = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= a && arr[i]<=b)
        {
            Tong += arr[i];
        }
        
    }
    return Tong;
}
//Bai 8
bool CheckDoiXung(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1-i]){
            return false;
        }
    }
    return true;
}
//Bai 9
int ChiSo(int *b,int n,int x){
    for (int i = 0; i < n; i++)
    {
        if(b[i] == x){
            return i;
        }
    }
    return -1;
}
void Sophantuxuathien(int *arr,int n){
    int b[100];
    int dem[100];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        dem[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int index = ChiSo(b,count,arr[i]);
        if(index == -1){
            b[count] = arr[i];
            dem[count] = 1;
            count++;
        }else{
            dem[index]++;
        }
    }
    hienthiBai9(b,dem,count);
}
void hienthiBai9(int *b, int *dem,int n){
    for (int i = 0; i < n; i++)
    {
        printf("So lan %d hien thi trong mang la %d\n",b[i],dem[i]);
    }
}
//Bai 10
bool SoDaXH(int *arr, int index, int x){
    for (int i = 0; i < index; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
        
    }
    return false;
}
void hienthiBai10(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        if(!SoDaXH(arr,i,arr[i])){
            printf("%d\t",arr[i]);
        }
    }
}
//Bai 11
void RandomArr(int *arr,int *n){
    while(*n<=0){
        printf("Nhap n:");
        scanf("%d",n);
    }
    int i =0;
    srand(time(0));
    while (i < *n)
    {
        int x = rand();
        if(!SoDaXH(arr,i,x)){
            arr[i++] = x;
        }

    }
} 
void hienthiBai11(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d",i,arr[i]);
    }
    
}
//Bai 12
void nhapK(int *k,int n){
    *k =-1;
    while(*k < 0 || *k>=n){
        printf("\nNhap k voi dieu kien(0<=k<%d):",n);
        scanf("%d",k);
    }
}
void chen(int *arr,int &n,int k,int x){
    for (int i = n; i >=k; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[k] = x;
    n++;
} 
void hienthiBai12(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
}
//Bai 13
void DeleteEleArr(int *arr,int *n,int k){
    for (int i = k; i < *n; i++)
    {
        arr[i] = arr[i+1];
    } 
    *n-=1;
}
void hienthiBai13(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
}
//Bai 14
void bubbleSort3(int *arr,int n){
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = n - 1;j > i;j--){
            if(arr[j] < arr[j-1]){
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp; 
            }
        }
    }
}
int timvitricanchen(int *arr, int n ,int x){
    if(x < arr[0]){
        return 0;
    }
    if(x > arr[n-1]){
        return n;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= x){
            return i;
        }
    }
}
void Chenkolamthaydoi(int *arr, int n, int k,int x){
    for(int i = n-1;i>k;i--){
        arr[i] = arr[i - 1];
    }
    arr[k] = x;
}   
void hienthiBai14(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%10d",arr[i]);
    }
    
}
//Bai 15
void Chen2Mang(int *arr, int n,int *brr,int m, int k){ 
    
    for (int i = m + n - 1; i >= k; i--)
    {
        arr[i] = arr[i-m];
    }
    for (int i = k; i < k + m ; i++)
    {
        arr[i] = brr[i-k];
    }
    
}
void hienthiBai15(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
//Bai 16
void VitriBatdau(int *arr, int startindex, int lenght){
    printf("\nVi tri bat dau %d\t Vi tri ket thuc %d\n",startindex, lenght);
    printf("Cac phan tu trong duong chay la:\n");
    for (int i = startindex; i < startindex + lenght; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}
void hienMang(int *arr, int n){
    printf("Mang goc:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
}
void Columbus(int *arr,int n,int *start, int *end, int *count){
    int j = 0;
    start[j] = 0;
    for (int i = 0; i < n  - 1; i++)
    {
        if(arr[i] > arr[i + 1]){
            end[j++] = i;
            start[j] = i + 1;
        }
    }
    end[j++] = n - 1;
    *count = j;
}
int MaxFromArr(int *start, int *end, int n){
    int max = end[0] - start[0]   + 1;
    for (int i = 1; i < n; i++)
    {
        int lenght =  end[i] - start[i] + 1;
        if(lenght > max){
            max = lenght;
        }
    }
    return max;
}
void hienthiBai16(int *arr, int n, int *start, int *end, int count){
    if(count == n){
        printf("\nKhong co duong chay dai nhat");
    }else{
        int max =  MaxFromArr(start, end, count);
        for (int i = 0; i < count; i++)
        {
            int len = end[i] - start[i] + 1;
            if(len == max){
                VitriBatdau(arr, start[i], len);
            }
        }
        
    }
}
int main(){
    int luachon;
    printf("1. Bai 1: Tim gia tri lon nhat, be nhat trong mang\n");
    printf("2. Bai 2: Tim gia tri lon nhat thu 2, be nhat thu 2\n");
    printf("3. Bai 3: Sap xep mang theo thu tu tang dan va giam dan\n");
    printf("4. Bai 4: Dem so lan so do xuat hien trong mang\n");
    printf("5. Bai 5: Tim gia tri gan X nhat trong mang\n");
    printf("6. Bai 6: Tinh TBC cac so chan, cac so le trong mang\n");
    printf("7. Bai 7: Tinh tong cac phan tu trong mang [a,b]\n");
    printf("8. Bai 8: Kiem tra mang doi xung\n");
    printf("9. Bai 9: Tim so lan xuat hien cua tung phan tu trong mang\n");
    printf("10.Bai 10: Hien thi cac phan tu trong mang duy nhat 1 lan\n");
    printf("11.Bai 11: Sinh mang ngau nhien\n");
    printf("12.Bai 12: Chen x vao vi tri bat ki trong mang(0<=k<n)\n");
    printf("13.Bai 13: Xoa x o vi tri bat ki trong mang(0<=k<n)\n");
    printf("14.Bai 14: Chen x vao mang khong lam mat di tinh tang dan cua mang do\n");
    printf("15.Bai 15: Chen mang B vao vi tri k cua mang A\n");
    printf("16.Bai 16: Xac dinh duong chay tang dai nhat trong mang\n");
    scanf("%d",&luachon);
    switch (luachon){
        case 1:{
            int n = 0;
            int a[100];
            nhap(a,&n);
            int min = a[0], max = a[0];
            minmax(a,n,&min,&max);
            hienthiBai1(a,&min,&max);
            break;
        }
        case 2:{
            int n = 0;
            int a[100];
            nhap(a,&n);
            int min2 = a[0], max2 = a[0];
            minmax2(a,n,&min2,&max2);
            hienthiBai2(min2,max2);
            break;
        }
        case 3:{
            int n;
            int a[100]; 
            nhap(a, &n);
            printf("\nTruoc khi sap xep\n");
            hienthiBai3(a,n);
            printf("Sau khi sap xep theo chieu tang dan\n");
            BubbleSort1(a,n);
            hienthiBai3(a,n);
            printf("Sau khi sap xep giam dan\n");
            BubbleSort2(a,n);
            hienthiBai3(a,n);
            break;
        }
        case 4:{
            int n;
            int a[100];
            int x;
            nhap(a,&n);
            do{
            printf("Nhap x:");
            scanf("%d",&x);
            }while(x<=0);
            printf("So lan X xuat hien trong mang la: %d\n",DemSo(a,n,x));
            break;
        }
        case 5:{
            int n;
            int a[100];
            int x;
            nhap(a,&n);
            printf("Nhap x:");
            scanf("%d",&x);
            int k = SoGanX(a,n,x);
            hienthiBai5(a,n,x,k);
            break;
        }
        case 6:{
        int n;
        int a[100];
        nhap(a, &n); 
        float TBCC, TBCL;
        TBCCL(a,n,&TBCC,&TBCL);
        hienthiBai6(TBCC,TBCL);
        break;
        }
        case 7:{
            int n;
            int arr[100];
            nhap(arr,&n);
            int a,b;
            NhapAB(&a,&b);
            int tong = TinhTong(arr,n,a,b);
            printf("Tong cua mang trong doan [%d,%d] la: %d\n",a,b,tong);
            return 0;
            break;
        }
        case 8:{
            int n;
            int arr[100];
            nhap(arr,&n);
            if(CheckDoiXung(arr,n)){
                printf("Mang doi xung\n");
            }else{
                printf("Mang khong doi xung\n");
            }
            break;
        }
        case 9:{
            int n;
            int arr[100];
            nhap(arr,&n);
            Sophantuxuathien(arr,n);
            break;
        }
        case 10:{
            int n;
            int arr[100];
            nhap(arr,&n);
            hienthiBai10(arr,n);
            break;
        }
        case 11:{
            int n;
            int arr[100];
            RandomArr(arr,&n);
            hienthiBai11(arr,n);
            break;
        }
        case 12:{
            int n;
            int arr[100];
            nhap(arr,&n);
            int k,x;
            nhapK(&k,n);
            printf("Nhap x:");
            scanf("%d",&x);
            chen(arr,n,k,x);
            hienthiBai12(arr,n);
            break;
        }
        case 13:{
            int n;
            int arr[100];
            nhap(arr,&n);
            int k;
            nhapK(&k,n);
            DeleteEleArr(arr,&n,k);
            hienthiBai13(arr,n);
            break;
        }
        case 14:{
            int n;
            int arr[100];
            nhap(arr,&n);
            bubbleSort3(arr,n);
            hienthiBai14(arr,n);
            int x;
            printf("\nNhap x:");
            scanf("%d",&x);
            int v;
            v = timvitricanchen(arr,n-1,x);
            Chenkolamthaydoi(arr,n,v,x); 
            hienthiBai14(arr,n);
            break;
        }
        case 15:{
            int n,m;
            int arr[100], brr[100];
            int k;
            printf("Nhap mang A:\n");
            nhap(arr,&n);
            printf("Nhap mang B\n");
            nhap(brr,&m);
            nhapK(&k,n);
            printf("Mang A:\n");
            hienthiBai15(arr,n);
            printf("Mang B:\n");
            hienthiBai15(brr,m);
            printf("Mang sau khi duoc chen\n");
            Chen2Mang(arr,n,brr,m,k);
            hienthiBai15(arr,m+n);
            break;
        }
        case 16:{
            int n, arr[100];
            int start[100], end[100];
            int count = 0;
            nhap(arr, &n);
            hienMang(arr, n);
            Columbus(arr,n, start, end, &count); 
            hienthiBai16(arr, n, start, end , count); 
            break;
        }
    }
}
    
