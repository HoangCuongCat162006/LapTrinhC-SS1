#include<stdio.h>

int main(){
	//kieu so nguyen : dung de luu cac gia tri so nguyen 
	int age = 18; // vd: tuoi cua mot nguoi 
	
	//kieu so thuc (float) : dung de luu cac so co phan thap phan voi do chinh xac don 
	float height = 1.72f; // vd : chieu cao cua mot nguoi tinh bang met 
	
	//kieu so thuc (double) : dung de luu c�c so c� phan thap ph�n voi do chinh xac cao hon float
	double pi= 3.141592653589793; // V� du: so Pi voi do chinh xac cao
	  
	//kieu ki tu (char): D�ng de luu mot k� tu don hoac gi� tri m� ASCII cua ky tu?
	char grade = 'A'; // V� du: �iem xep loai
	 
	//kieu boolean (su dung thu vien <stdbool.h>): Dung de luu gi� tri d�ng hoac sai (true/false)
    #include <stdbool.h>
    bool isStudent = true; // V� du: Xac dinh xem co phai sinh vien khong
    
    //chuoi ky tu (mang ky tu): dung de luu mot ky tu, ke thuc bang ky tu '\0'
    char name[] = "John Doe"; // Vi du: ten cua mot nguoi
    
    //kieu so nguyen khong dau : dung de luu so nguyen duong (va 0) voi khoang gia tri lon hon 
    unsigned int score = 100; // vi du : diem so trong game 
    
    //Kieu so nguyen ngan (short): D�ng de luu so nguy�n nho (tiet kiem bo nho) 
    short temperature = -10; // V� d?: Nhiet do �m trong mua dong 
    
    //kieu so nguyen dai(long): D�ng de luu c�c so nguy�n lon hon kieu `int`.
    long population = 7800000000; // V� du: D�n so the gioi.

    // Kieu so nguy�n rat d�i (long long): Luu c�c so nguyen rat lon (64-bit).
    long long distanceToMoon = 384400000; // Vi du: Khoang cach tu Trai dat den Mat Trang (met)
    
    //kieu so nguyen rat dai kh�ng dau (unsigned long long): Luu so nguyen duong rat lon.
    unsigned long long starsInGalaxy = 100000000000; // Vi du: So luong ngoi sao trong thien ha
    
    return 0;
}
