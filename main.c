#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int exitLoop = 0;
	do{
		printHello();
		printf("      Enter The Choice:  ");
	    scanf("%d", &choice);
		switch(choice){
			case 1:{
				int choiceAdmin; 
				while (!exitLoop) {
			    	managerMenu();
					printf(" Enter The Choice: ");
					scanf("%d", &choiceAdmin);
					switch(choiceAdmin){
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						case 4:
							break;
						case 5:
							break;
						case 0:
							exitLoop = 1; 
							break;
						default:
							printf(" Khong hop le...\n");
					}
				}
				break;
			}
			case 2:
				break;
			case 3:
				printf("      ========= Thank You ========== \n");
				printf("      ========= See You Soon ======= \n");
				printf("   _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
				return 0;
			default:
				printf("      Khong hop le... \n");
		}
	}while(choice !=3);
	return 0;
}
