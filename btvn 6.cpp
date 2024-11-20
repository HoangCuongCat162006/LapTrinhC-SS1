#include <stdio.h>
 
 int main (){
     	 
 	// khai bao hang so PI va ban kinh hinh tron 
 	const float PI = 3.14;       // hang so PI voi gia tri la 3.14
 	float radius = 5.0f;         // ban kinh cua hinh tron 
 	
 	
 	// tinh toan chu vi va dien tich 
 	float circumference = 2 * PI * radius; // chu vi = 2 * Pi * ban kinh 
 	float area = PI * radius * radius ;    // dien tich = PI * ban kinh ^2
 	
 	
 	// in ket qua ra man hinh 
 	printf("Ban kinh cua hinh tron la : %.2f\n", radius);
 	printf("Chu vi cua hinh tron la : %.2f\n", circumference);
 	printf("Dien tich cua hinh tron la : %.2f\n", area); 
 	
 	return 0;
 	
 }
