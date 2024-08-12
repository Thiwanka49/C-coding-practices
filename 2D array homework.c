#include<stdio.h>
int main(void)
{
	int units[5][3]={{1,65,100},{2,66,50},{3,67,75},{4,68,200},{5,69,150}};
	int i,j,itemCode;
	int qty=0;
	char addAnother;
	int itemPrice=0,total=0,grandTotal=0;
	
	printf("==========================================\n");
	printf("ItemCode\tItemName\tItemPrice\n");
	printf("==========================================\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d\t",units[i][j]);
			
		}
		printf("\n");
	}

NextItem:
	
	printf("Enter item code :");
	scanf("%d",&itemCode);
	
	//--- Item search
	for(i=0;i<5;i++)
	{
		if(itemCode==units[i][0]) {
			printf("item name %d\n",units[i][1]);
			printf("item price %d\n",units[i][2]);
			itemPrice=units[i][2];
			break;
		}
		
	}
	
	printf("Enter quantity :");
	scanf("%d",&qty);
	
	
	total=itemPrice*qty;
	printf("Total=%d",total);
	
	grandTotal=total+grandTotal;
	printf("\nGrand total=%d",grandTotal);	
	
	printf("\nAdd another item(y/n)?\n");
	scanf("%c",&addAnother);
	scanf("%c",&addAnother);
	
	if(addAnother=='y'||addAnother=='Y'){
		goto NextItem;
	}else{
		printf("\nThank you come again!");
	}
	
	//printf("Item code=%d",&itemCode);
		
	/*do	
	{
	printf("Enter item code :");
	scanf("%d",&itemCode);
	
	printf("item name %d\n",units[i][j+1]);
	printf("item price %d\n",units[i][j+2]);
	
	printf("Enter quantity :");
	scanf("%d",&qty);
	
	printf("\nAdd another order(y/n)?\n");
	addAnother=getche();	
	}while(addAnother=='y'||addAnother=='Y');*/
	return 0;
}