#include <stdio.h>

int main(){
	// khai bao va khoi tao hai so nguyen 
	int num1= 10; //so nguyen thu nhat
	int num2= 2; // so nguyen thu hai
	
	// tinh toan cac phep toan co ban 
	int sum = num1+num2;          // tong
	int diffrence = num1 - num2;  // hieu
	int product = num1*num2;      // tich
	float quotient;               // thuong (su dung float de luu gia tri thap phan )
	
	
	
    // in ket qua ra man hinh 
    
    printf( " tong cua %d va %d la : %d\n", num1,num2,sum);
    printf( " hieu cua %d va %d la : %d\n", num1,num2,diffrence);
    printf( " tich cua %d va %d la : %d\n", num1,num2,product);
    printf( " thuong cua %d va %d la : %.2f\n",num1,num2,quotient); 
	
	return 0; 
}
