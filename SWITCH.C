#include<stdio.h>
int main(){
	jishan:
		printf("enter 1 for english\n");
		printf("enter 2 for hindi\n");
		printf("enter 3 for gujarati\n");
		printf("enter 4 for exist\n");
		
		int choice,choice2;
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice){
			
			case 1:
				printf("enter 1 for chota recharge\n");
			
				printf("enter 2 for medium recharge\n");
				
				printf("enter 3 for big recharge\n ");
				
				printf("enter your choice");
				scanf("%d",&choice2);
				switch(choice2){
				
				
				
				
				case 1:	printf("you have done chota recharge successfully\n");
					goto jishan;
					break;
				case 2:	printf("you have done medium recharge succcessfully\n");
					goto jishan;
					break;
				case 3:	printf("you have done big recharge successfully \n");
					goto jishan;
					break;
					default :printf("invalied choice");
					goto jishan;
					
			}
			
			
			case 2:
			
			
				printf("chote recharge ke liye 1 dabaye\n");
				
				printf("chote recharge ke liye 2 dabaye\n");
				
				printf("chota recharge ke liye 3 dabaye\n");
				
				printf("enter your choice");
				scanf("%d",&choice2);
				switch(choice2){
				
				
				
				case 1:	printf("you have done chota recharge successfully\n");
					goto jishan;
					break;
				case 2:	printf("you have done medium recharge succcessfully\n");
					goto jishan;
					break;
				
				case 3:	printf("you have done big recharge successfully \n");
					goto jishan;
					break;
					default :printf("invalied choice");
					goto jishan;
				}
			
				case 3:
					
				
				printf("nanu recharge mate 1 dabavoo\n");
				
				printf("nanu recharge mate 2 dabavoo\n");
				
				printf("nanu recharge mate 3 dabavoo\n");
				
				printf("enter your choice");
				scanf("%d",&choice2);
				switch(choice2){
				
				
				
				case 1:	printf("you have done chota recharge successfully\n");
					goto jishan;
					break;
				case 2:	printf("you have done medium recharge succcessfully\n");
					goto jishan;
					break;
				case 3:	printf("you have done big recharge successfully \n");
					goto jishan;
					break;
					default :printf("invalied choice");
					goto jishan;
				}
				case 4: printf("exited successfully\n");
				break;
				default:printf("invalied choice");
		
		}
		
		
		
}
