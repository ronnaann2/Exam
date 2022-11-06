#include <stdio.h>
#include <math.h>

	int x;
    char* ItemName[100] = {"     -         ","2PC Chicken Meal   ","Chickin Chops Meal   ","Wings Meal        ","1PC Chicken Meal    ","Fish and Chips Meal","Seafood Chapchae    ","Crispy Squid Meal","Crispy Shrimp Meal","Beef Bulgogi Meal","Crispy Fish Meal"
	,"K-Fries           ","Mandu            ","Crispy Crepe      ","Milky Kreme  ","END OF ORDER    ","         ","         ","         ","","",""};
	int xname[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
	int ItemPrice [20]={225,215,225,134,220,220,220,220,210,220,54,66,78,66,80,100,140,250,140,200};
	int numberproducts=sizeof(ItemName)/8;
	int productQty[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int total=0;	
	int ReceiptQty[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};
	int ReceiptPrice[100]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};	

	double finaltotal = 0;
	int foodnumber, qty,i,x,d,newtotal;
	char order;
    int valueofx,a,b,c,d;
    float payment;
    float change;
    int picked;
    
    
int main ()
{

    menu();
    getOrders ();

    
}

	   


void menu(){
	//function to display menu
    int i;
	printf ("\nWELCOME TO BONCHON!", numberproducts);
	
	printf("\nMAIN DISHES:========================================");
	for  (i=0; i<10; i++) {
	
		printf("\n%d %s\t\t\t%d pesos", i+1, ItemName[i+1], ItemPrice[i]);
	}
	
	printf("\nADD ONS:===========================================");
	for  (i=10; i<14; i++) {
	
		printf("\n%d %s \t\t\t %d pesos", i+1, ItemName[i+1], ItemPrice[i]);
	}
	printf("\n===================================================");
		
		printf("\n15  CHECKOUT");
	
	printf("\n===================================================");
	
		printf("\n16  EXIT");


    
    	printf("\n===================================================");
    
}
void addons(){
	printf("\nADD ONS:===========================================");
	for  (i=10; i<14; i++) {
	
		printf("\n%d %s \t\t\t %d pesos", i+1, ItemName[i+1], ItemPrice[i]);
	}
	printf("\n===================================================");
	
}

//function for arrays
int ex(int x){
	
    x = 0;
   
    x = valueofx;
   
  	int exes = x + 1;
  	
  	return exes;
  
}


void getAddons (){
	qty=0;
	newtotal=0;
	char order;
	
	
	printf("\nAdd ons:");
	scanf("%d",&picked);
	//function to see if picked is valid for addons
	if (picked<11||picked>14){
		printf ("\nSorry please only select from the add ons menu");
		getAddons();
	}
	else{
		valueofx = ex(x);
		foodnumber=picked;
		
		printf("%s", ItemName[foodnumber]);
	xname[valueofx]= foodnumber;
	printf("\nquantity:");
	scanf("%d",&qty);
	ReceiptQty[valueofx]=qty+ReceiptQty[valueofx];
	

  	total = (total + ItemPrice[foodnumber-1]*qty);
  	printf ("current total:  %d",total);
  	
  	
  	newtotal=+(ItemPrice[foodnumber-1]*qty);
  	ReceiptPrice[valueofx]=newtotal+ReceiptPrice[valueofx];
  	
  	
  	printf("\n\nAnything else?");
  	int ex(int x);
  	getOrders ();
	}
	
}



void getOrders (){
    //function to getthe user orders
    qty=0;
	newtotal=0;
	char order;

	
	//process to know if valid order
	printf("\nOrder:");
	scanf("%d",&picked);
	
	if (picked<11) {
	//placing picked into array
	valueofx = ex(x);
	foodnumber=picked;	
	printf("%s", ItemName[foodnumber]);
			
	xname[valueofx]= foodnumber;		
	printf("\nquantity:");
	scanf("%d",&qty);
	ReceiptQty[valueofx]=qty+ReceiptQty[valueofx];
	

  	total = (total + ItemPrice[foodnumber-1]*qty);
  	printf ("current total:  %d",total);
  	
  	
  	newtotal=+(ItemPrice[foodnumber-1]*qty);
  	ReceiptPrice[valueofx]=newtotal+ReceiptPrice[valueofx];

	//function to get addons
    printf("\nwould you like to place add ons y/n?:");
    scanf("%s",&order);
    
    if (order=='y'||order=='Y'){
    
    int ex(int x);
    getAddons ();
    
}

else {
	
	int ex(int x);
	printf("anything else?");
    getOrders ();
   
		}
		
		
	}

else if(picked == 15){
			RERE();

	
}

else if (picked==16){
	return 0;
}

else if (picked<0||picked>10){
	printf("\nPlease only selct from the main dishes menu!");
	getOrders();
}

    
     	
		
		
	

		
		
			
	
	
	
	


}






void RERE(){
    //function to show to receipt and get user input for payment
    
    if (total>0){
	
  	printf("\nRECEIPT:==================================================\n");
  	printf("orders\t\t      \tquantity \tprice");
  	for(i = 1; i <=(valueofx); i++){
  	  
	printf("\n%d %s \t%d\t\t%d pesos", i,ItemName[xname[i]] ,ReceiptQty[i], ReceiptPrice[i]);
	finaltotal=ReceiptPrice[i]+finaltotal;
	
        }
    printf("\n==========================================================\n");
  	
  	printf("\nTotal \t\t\t%.2f pesos",finaltotal);
  
  	//userpayment   
  	    printf("\nPlease input the amount you'd like to pay: ");
  	    scanf("%f",&payment);
  	    change=payment-finaltotal;
  	    if (payment>=finaltotal){
  	    	printf("\nThank you for paying, your change is:%.2f",change);
  	    	_Exit;
		  }
		else {
			printf("\nInsufficient Payment please input enough money",change);
			RERE();
			
		}
		
	}
	
	else {
	
  	    //return 0;
  	    printf("Please select from the main menu first before checking out!");
  	    getOrders();
  	}
  }
  	    
  	   
  	    
  	
  	
