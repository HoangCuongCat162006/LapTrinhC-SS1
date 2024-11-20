#include<stdio.h>

int main(){
	//kieu so nguyen : dung de luu cac gia tri so nguyen 
	int age = 18; // vd: tuoi cua mot nguoi 
	
	//kieu so thuc (float) : dung de luu cac so co phan thap phan voi do chinh xac don 
	float height = 1.72f; // vd : chieu cao cua mot nguoi tinh bang met 
	
	//kieu so thuc (double) : dung de luu các so có phan thap phân voi do chinh xac cao hon float
	double pi= 3.141592653589793; // Ví du: so Pi voi do chinh xac cao
	  
	//kieu ki tu (char): Dùng de luu mot ký tu don hoac giá tri mã ASCII cua ky tu?
	char grade = 'A'; // Ví du: Ðiem xep loai
	 
	//kieu boolean (su dung thu vien <stdbool.h>): Dung de luu giá tri dúng hoac sai (true/false)
    #include <stdbool.h>
    bool isStudent = true; // Ví du: Xac dinh xem co phai sinh vien khong
    
    //chuoi ky tu (mang ky tu): dung de luu mot ky tu, ke thuc bang ky tu '\0'
    char name[] = "John Doe"; // Vi du: ten cua mot nguoi
    
    //kieu so nguyen khong dau : dung de luu so nguyen duong (va 0) voi khoang gia tri lon hon 
    unsigned int score = 100; // vi du : diem so trong game 
    
    //Kieu so nguyen ngan (short): Dùng de luu so nguyên nho (tiet kiem bo nho) 
    short temperature = -10; // Ví d?: Nhiet do âm trong mua dong 
    
    //kieu so nguyen dai(long): Dùng de luu các so nguyên lon hon kieu `int`.
    long population = 7800000000; // Ví du: Dân so the gioi.

    // Kieu so nguyên rat dài (long long): Luu các so nguyen rat lon (64-bit).
    long long distanceToMoon = 384400000; // Vi du: Khoang cach tu Trai dat den Mat Trang (met)
    
    //kieu so nguyen rat dai không dau (unsigned long long): Luu so nguyen duong rat lon.
    unsigned long long starsInGalaxy = 100000000000; // Vi du: So luong ngoi sao trong thien ha
    
    return 0;
}
