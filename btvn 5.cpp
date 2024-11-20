#include <stdio.h>

int main(){
	// khai bao va khoi tao bien chieu dai va chieu rong cua hinh chu nhat 
	int length = 20; // chieu dai cua hinh chu nhat
	int width  = 10; // chieu rong cua hinh chu nhat
	
	// tinh chu vi va dien tich cua hinh chu nhat 
	int perimeter = 2 * (length + width);  // chu vi    = chieu dai + chieu rong 
	int aera = length * width;             // dien tich = chieu dai * chieu rong
	
	// in ket qua ra man hinh 
	printf("Chieu dai cua hinh chu nhat la : %d\n" ,length );
	printf("Chieu rong cua hinh chu nhat la : %d\n",width); 
	printf("Chu vi cua hinh chu nhat la : %d\n", perimeter);
	printf("Dien tich cua hinh chu nhta la : %d\n", aera);
	
	return 0;
	
	
}
