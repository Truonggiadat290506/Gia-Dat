#define SIZE 100
#include<stdio.h>
void nhapmang(float a[],int n);
void xuatmang(float a[],int n);
float tinhtong(float a[],int n);
float tinhtrungbinhle(float a[],int n);
float demphantuduong(float a[],int n);
float sapxeptangdan(float a[],int n);
int main()
{
float A[SIZE];
int n;

	do 
	{
		printf("\nNhap vao so phan tu:");
		scanf("%d",&n);
	} while(n<=0||n>SIZE);
	
//Goi ham cau a 
nhapmang(A,n);
//Goi ham cau b
printf("\nMang vua nhap la :");
xuatmang(A,n);
//Goi ham cau c
int kq=tinhtong(A,n);
printf("\nTong cac gia tri trong mang la : %d\n",kq);
//Goi ham cau d
int tble=tinhtrungbinhle(A,n);
printf("Trung binh cong cac so le la : %d\n",tble);
//Goi ham cau e
int demduong=demphantuduong(A,n);
printf("So phan tu duong trong mang:%d\n",demduong);
//Goi ham cau f
int sapxep=sapxeptangdan(A,n);
printf("Gia tri tang dan la:%d\n",sapxep);
return 0;
}
//Ham nhap mang 
	void nhapmang(float a[],int n) {
		int i=0;
		for(int i=0;i<n;i++);
		{
		printf("Nhap cac phan tu cua mang:\n");
		scanf("%f",&a[i]);
		
		}
}
//Ham xuat mang
	void xuatmang(float a[],int n) {
		int i=0;
		for(int i=0;i<n;i++){
			printf("%.2f",a[i]);
		}
		
}
//Ham tinh tong
	float tinhtong(float a[],int n) {
		float s=0;
		for(int i=0;i<n;i++){
				s=s+a[i];
		}
	
		return s;		
	
}
//Ham tinh trung binh cong tai vi tri le
	float tinhtrungbinhle(float a[],int n) {
		float tong=0;
		int dem=0;
		int i=0;
		for (i=1;i<n;i=i=i+2);
		tong+=a[i];
		dem++;
		return tong;
		}
//Ham dem so phan tu duong
	float demphantuduong(float a[],int n) 
	{
		float dem=0;
		int i=0;
		for(i=0;i<n;i++){
			if (a[i]>0);
			dem++;
		} 
		
		return dem;
	}
//Ham sap xep gia tri tang dan
	float sapxeptangdan(float a[],int n) {
		for(int i=0;i<n;i++) {
			for(int j=j+1;j<n;j--) {
				if (a[i]>a[j]) {
					float temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Mang sau khi da sap xep tang dan:\n");
		
		for (int i=0;i<n;i++) {
					printf("%.2f",a[i]);
		}
	}


		
		
 
