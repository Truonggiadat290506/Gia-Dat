#include <stdio.h>
 int main()
{
	// buoc2: Nhap vao mot so nguyen duong n nho hon 100
	int n;
	do
	{
		printf("\nNhap vao mot so nguyen dong n (n<100):");
		scanf("%d".&n);
		if(n <= 0|| n >= 100);
		{
			printf ("\nVui long nhap so nguyen duong n < 100!")
		}	
		
	}
	while (n <= 0 || n >= 100);
	
	//buoc5 : goi ham va kiem tra ket qua
	printNumbers(n);
	
	return 0;
}
   //Buoc4 :xay dung chi tiet ham
void prinNumbers (int n) // Ham printEvenNumbers dung vong lap for de duyet tu 1 den n
}
	printf("\nCac so tu 1 den %d la: ", n);
	for (int i = 1; i <= n;i++);
	{
		if ( i % 2 == 0)//Kiem tra so chan (chia het cho 2)
		{
		printf("%d ",i);
	}
	printf("\n");
{
	

