#include <stdio.h> 
#include<stdbool.h>
int main(){
	// kiểu số nguyên (integer),lưu trữ các số nguyên
	int a = 10;  // biến số nguyên , có giá trị 10  
	
	// kiểu số thực (floating-point),lưu trữ các số thập phân
	float b = 3.14 // biến số thực, có giá trị 3.14 (độ chính xác hơn) 
	
	// kiểu số thực với độ chính xác cao hơn (double-precision floating-point)
	double c = 2.718281828459 //biến số thực chính xác cao hơn, giá trị gần đúng của hằng số e 
    
    // kieu ky tu (character), luu tru mot ky tu duy nhat
    char d ='A'; // bien ky tu, gia tri la ky tu 'A'
    
    // kieu so nguyen k dau (unsigned integer), chi luu so nguyen duong 
    unsigned int e = 42; // bien so nguyen k dau, gia tri 42
    
    // kieu short (so nguyen nhan hon), dung khi can tiet kiem bo nho
    short f = -32768; // bien short, gia tri nho nhat cua kieu short
    
    // kieu long (so nguyen dai hon),dung khi can luu tru so lon
    long g =100000L; // bien long, gia tri 100000
    
    bool h = true; // bien boolean, gia tri la true(dung)
    
    // kieu con tro (pointer), luu tru dia chi cua mot bien 
     int *p = &a; // bien con tro, luu dia chi cua bien 'a'
     
     //in gia tri cac bien ra man hinh 
     printf("int a = %d\n",a);
     printf("float b = %.2f\n",b);
     printf("double c = %.12f\n",c);
     printf("char d = %c\n",d);
     printf("unsigned int e = %u\n",e);
     printf("short f = %d\n",f);
     printf("long g = %Id\n",g);
     printf("bool h = %d\n",h);
     printf("Con tro p luu tru dia chi a = %p\n",(void*)p);
}
