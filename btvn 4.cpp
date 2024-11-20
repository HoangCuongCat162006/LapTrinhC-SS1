#include <stdio.h>

int main (){
	
	//khai bao va khoi tao canh cua hinh vuong 
	int side = 5; //do dai canh hinh vuong 
	
	// tinh toan chu vi va dien tich 
	int perimeter = 4 * side; // chu vi = 4 x canh 
	int aera = side * side;   // dien tich = canh x canh 
	
	// in ket qua ra man hinh 
	printf ("Canh cua hinh vuong la : %d\n", side );
	printf ("Chu vi cua hinh vuong la : %d\n", perimeter);
	printf ("Dien tich cua hinh vuong la : %d\n", aera);
	
	return 0; 
}
