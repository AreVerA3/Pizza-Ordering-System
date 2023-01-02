//Assignment 01 ITP G05 Sem1 2022/2023, Audrey Vera Anak Tap (82448), Izzat Harith bin Aswandie (84078), Abg Mohd Luqman bin Abg Mohd Tahir (82335)
//Pizza Ordering System + Receipt 

#include <stdio.h>
#include <math.h>

int main()
{
	//declaration of all integers
	int i= 1;
	int order_number,order_type,pizza_choice,drink,garlic_bread,num_garlic_bread,soup;
	//declaration of pizza names
	int Hawaiian = 0, Tuna_Island = 0, Chicken_Pepperoni = 0, Deluxe_Cheese = 0, Veggie_Lover = 0;
	//declaration for prices 
	float price;
	float total_price= 0.00;
	float discount= 0.00;
	float total_price_after_discount= 0.00;
	
	//Asking user for the number of pizza they want
	Prompt:
	printf ("\nEnter number of pizza you like: ");
	scanf ("%d", &order_number);
	if (order_number<=0)
	{
		//Situation where user unexpectedly enter an invalid input
		printf ("Sorry you've entered an invalid number. Please try again.\n");
		printf ("\n");
		goto Prompt;
	}
	
	//Creating loop for Ordering 
	while (i<= order_number)
    {
    	printf ("\nPizza %d", i);
    	Prompt2:
    	printf ("\nAla Cart or Combo? (1-Ala Cart,2-Combo): "); //ask user ala or combo
    	scanf ("%d",&order_type);
    	switch (order_type)
    	{
    	    //Ala Cart ChoiceA
			case 1:  
    			Prompt3:
    			printf ("\n :");
				scanf ("%d", &pizza_choice);
				
				//pizza price & pizza counter
				 if (pizza_choice==1)
			    {
			    	total_price += 20.00;
			    	Hawaiian += pizza_choice;
				}
				 else if (pizza_choice==2)
			    {
			    	total_price += 25.00;
			    	Tuna_Island += (pizza_choice-1);
				}
				 else if (pizza_choice==3)
			    {
			    	total_price += 22.00;
			    	Chicken_Pepperoni += (pizza_choice-2);
				}
				 else if (pizza_choice==4)
			    {
			    	total_price += 18.00;
			    	Deluxe_Cheese += (pizza_choice-3);
				}
				 else if (pizza_choice==5)
			    {
			    	total_price += 16.00;
			    	Veggie_Lover += (pizza_choice-4);
				}
				else if (pizza_choice != 1 && pizza_choice != 2 && pizza_choice != 3 && pizza_choice != 4 && pizza_choice != 5)
				{
					//Situation where user unexpectedly enter an invalid input
					printf ("Sorry the number you entered is invalid. Please try again.\n");
					goto Prompt3;
				}
    		    break; 
    		    
    	    //Combo Choice
			case 2:
    			Prompt4:
    	    	printf ("\nWhich pizza you like to order? (1-Hawaiian, 2-Tuna Island, 3-Chicken Pepperoni, 4-Deluxe Cheese, 5-Veggie Lover):");	
    	    	scanf ("%d", &pizza_choice);
    	    	 if (pizza_choice==1)
			    {
			    	total_price += 28.00;
			    	Hawaiian += pizza_choice;
				}
				 else if (pizza_choice==2)
			    {
			    	total_price += 32.00;
			    	Tuna_Island += (pizza_choice-1);
				}
				 else if (pizza_choice==3)
			    {
			    	total_price += 30.00;
			    	Chicken_Pepperoni += (pizza_choice-2);
				}
				 else if (pizza_choice==4)
			    {
			    	total_price += 26.00;
			    	Deluxe_Cheese += (pizza_choice-3);
				}
				 else if (pizza_choice==5)
			    {
			    	total_price += 22.00;
			    	Veggie_Lover += (pizza_choice-4);
				}
				else if (pizza_choice != 1 && pizza_choice != 2 && pizza_choice != 3 && pizza_choice != 4 && pizza_choice != 5)
				{
					//Situation where user unexpectedly enter an invalid input
					printf ("Sorry the number you entered is invalid. Please try again.\n");
					goto Prompt4;
				}
				Prompt5:
    	    	printf ("\nWould you like to upgrade your drink? (1-Yes 2-No):");
    	    	scanf ("%d",&drink);
    	    	switch (drink)
    	    	{
    			case 1:
    				printf ("Additional of RM 1.20 is charged for the large drink.\n");
    				total_price += 1.20;
    			    break;
    			 
				case 2:
    			    break;   
    			
				//Situation where user unexpectedly enter an invalid input
				default:
    				printf ("Sorry the number you've entered is invalid.Please try again.\n");
    				goto Prompt5;
    			    break;
		    	}
		    	Prompt6:
		    	printf ("\nWould you like to add more garlic bread? (1-Yes 2-No):");
		    	scanf ("%d", &garlic_bread);
		    	switch (garlic_bread)
		    	{
		    		case 1:
		    			Prompt7:
		    			printf ("Enter the quantity you want:");
		    			scanf ("%d", &num_garlic_bread);
		    			printf ("RM 2.50 per garlic bread.\n");
		    			if (num_garlic_bread<=0)
		    			{
		    				//Situation where user unexpectedly enter an invalid input
		    				printf("Sorry the number you've entered an invalid number. Please try again.");
		    				goto Prompt7;
						}
						total_price += 2.50 * num_garlic_bread;
		    		    break;
		    		
		    		case 2:
    			        break;
		    		
		    		//Situation where user unexpectedly enter an invalid input (garlic bread)
		    		default:
		    			printf ("Sorry the number you've entered is invalid. Please try again.\n");
    				    goto Prompt6;
		    			break;
				}
				Prompt8:
				printf ("\nWould you like to upgrade your mushroom soup? (1-Yes 2-No):");
				scanf ("%d", &soup);
				switch (soup)
				{
					case 1:
						printf ("Additional of RM 1.00 is charged for the mushroom soup.\n");
						total_price += 1.00;
						break;
					
					case 2:
						break;
					
					//Situation where user unexpectedly enter an invalid input (mushroom soup)
					default:
						printf ("Sorry the number you've entered is invalid. Please try again.\n");
    				    goto Prompt8;
						break;
				}
		    	break;
		    
		    //Situation where user unexpectedly enter an invalid input !=(ala or combo)
		    default:
		    	printf("Sorry you have entered an invalid number. Please try again.\n");
		    	goto Prompt2;
		}
    i++;
    }

    //receipt details
    printf ("\n");
    printf ("\nOrder details:");
    printf ("\nTotal Pizza order:%d",order_number);
    printf ("\nHawaiian Pizza:%d",Hawaiian);
    printf ("\nTuna Island Pizza:%d",Tuna_Island);
    printf ("\nChicken Pepperoni PIzza:%d",Chicken_Pepperoni);
    printf ("\nDeluxe Cheese Pizza:%d",Deluxe_Cheese);
    printf ("\nVeggie Lover Pizza:%d",Veggie_Lover);
    printf ("\nTotal Price:RM %.2f",total_price);
    
    //Calculation for discount and total price after discoun yt
    discount = total_price * 5/100;
    total_price_after_discount = total_price - discount;
    if (total_price=50.00) //discount for total price of RM50 
    {
    	printf ("\nDiscount 5%:RM %.2f",discount);
    	printf ("\nTotal Price after discount: RM%.2f",total_price_after_discount);
	}
	else if (total_price>50.00) //discount of total price >RM50
    {
    	printf ("\nDiscount 5%:RM %.2f",discount);
    	printf ("\nTotal Price after discount: RM%.2f",total_price_after_discount);
	}
    return 0;
}
