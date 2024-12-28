#include <stdio.h>
#include "functions.h"

// LOGIC HAM

// In ra Menu dau tien
void printHello(){ 
	int choice;
	printf("\n   *** Bank Management System Using C++ ***\n");
	printf("               CHOOSE YOUR ROLE \n");
	printf("      ==============================\n");
	printf("      [1]. Admin \n");
	printf("      [2]. User \n");
	printf("      [3]. Exit the Program \n");
	printf("      ==============================\n");
}

// 2. Logic cua Admin khi chon vao Admin
// In ra menu quan ly nguoi dung
void managerMenu(){
	printf("\n   ===== User Management System =====\n");
    printf("           User Management Menu:\n");  // QUAN LY NGUOI DUNG ( Admin )
    printf("       [1]. Display user list \n");  // Hien thi danh sach nguoi dung
    printf("       [2]. Add new user\n"); // Them nguoi dung
	printf("       [3]. Delete user\n"); // Xoa nguoi dung
	printf("       [4]. Edit user information \n"); // Sua thong tin nguoi dung
	printf("       [5]. Search for user\n"); // Tim kiem nguoi dung 
	printf("       [0]. Exit\n"); // Thoat khoi chuc nang Admin

}

// Giao dien dang nhap vao che do Admin
void adminLogin(){
	printf("\n   *** Bank Management System Using C++ ***\n");
	printf("                      LOGIN                   \n");
	printf("          =================================  \n");
	printf("          Email:                              \n");
	printf("          Password:                            \n");
	printf("          =================================  \n");
}


// In ra  danh sách nguoi dung
void printUsers(){
	
}
