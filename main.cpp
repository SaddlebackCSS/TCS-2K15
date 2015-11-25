/**************************************************************************
 * AUTHOR     : Josh Gatmaitan
 * ***********************************************************************/

#include "Header.h"

int main ()
{

	 int        	     userChoice; // IN & PROC  - User menu input
	 char                wait;
	 Menu       	     choice;     // PROC       - userChoice typecasted to Menu
	 int                 countToCook;      // Calc & OUT - How many turns have been played
	 int count;
	 bool full = false;
	 bool drunk = false;
	 bool RUINED = false;
	 bool turkeyIn = true;

	 count = 0;
	 userChoice  = 0;
	 countToCook = 0;

	cout <<   "*************************************************\n";
	cout <<   "*     ### TURKEY COOKING SIMULATOR 2015###      *";
	cout << "\n* _____________________________________________ *";
	cout << "\n*             Welcome to TCS2k15!               *";
	cout << "\n*                                               *";
	cout << "\n* 	Can you cook the perfect turkey and not *";
	cout << "\n*    have things go horribly wrong?             *";
	cout << "\n* _____________________________________________ *";
	cout << "\n*    Rules are simple, the turkey is currently  *";
	cout << "\n* in the oven cooking. Choose an Action.        *";
	cout << "\n*    Each action will count as one or more turns*";
	cout << "\n* your turkey has been cooking. It will be      *";
	cout << "\n* done cooking after a random amount            *";
	cout << "\n* of turns (10-20)                              *";
	cout << "\n*    Check it often or you may just come back   *";
	cout << "\n* to a burnt turkey and very angry              *";
	cout << "\n* and very hungry relatives.                    *";
	cout << "\n*                                               *";
	cout << "\n* Enjoy this incredibly realistic simulator!    *";
	cout << "\n* _____________________________________________ *";
	cout << "\n*************************************************\n\n";
	cout << "Press Enter to begin playing...\n\n";

	cin.get(wait);

	// 10 - 20
	srand(time(NULL));
    countToCook = 10 + ( rand() %  11  );

	// Clear
	system("cls");
	cout << endl;

	// Stores and checks for valid input
	cout << "Turn (1)\n";
	userChoice = GetAndCheckInp(userChoice, DisplayMenu(), 0, 5);

	// Runs until user enters 0
	while (userChoice != 0 && turkeyIn && !RUINED)
	{
	 choice = Menu(userChoice);
	 switch (choice)
	 {

	 case Option1  : cout << "\nYou Check the turkey.\n";
	 	 	 	 	 count++;
	 	 	 	 	 if (count < 5)
	 	 	 	 		 cout << "The turkey is cooking, still looking raw...\n\n";
	 	 	 	 	 else if (count < 8)
	 	 	 	 		 cout << "The turkey is cooking, starting smell and change color...\n\n";
	 	 	 	 	 else if (count < 10)
	 	 	 	 		 cout << "The turkey looks and smells great, should almost be done...\n\n";
	 	 	 	 	 else if (count < countToCook)
	 	 	 	 			 cout << "Everyone's mouth is watering\n"
	 	 	 	 					 "The turkey is very close to being done!\n\n";
	 	 	 	 	 else if (count == countToCook)
	 	 	 	 		 cout << "Perfect! Turkey is done!\n\n";
	 	 	 	 	 else if (count > countToCook )
	 	 	 	 	 {
	 	 	 	 		 cout << "Turkey has burned! You're a horrible chef!\n\n";
	 	 	 	 		 RUINED = true;
	 	 	 	 	 }


					 break;

	 case Option2  : cout << "\nYou chat with family, a relative keeps you talking for way too long.\n";
	                 cout << "Three turns have passed...\n\n";
	                 count += 3;
					 break;

	 case Option3  : cout << "\nYou eat some snacks while waiting, \n"
			                 "accidentally filling up before the turkey is done.\n";
					 cout << "Two turns have passed...\n\n";
					 full = true;
					 count += 2;
                     break;

	 case Option4  : cout << "\nYou have a couple of drinks while waiting,\n"
			                 "You've become drunk and barely remember you have a turkey cooking!\n";
					 cout << "Three turns have passed...\n\n";
					 drunk = true;
					 count += 3;
					 break;

	 case Option5  : RUINED = true;
		             cout << "\nYou take the turkey out of the oven.\n";
					 if (count < 5)
						 cout << "The turkey is still raw... You've ruined Thanksgiving!\n\n";
					 else if(count < 8)
						 cout << "The turkey isn't raw but nowhere near done...\n"
								 "You've ruined Thanksgiving!\n\n";
					 else if (count < 10)
						 cout << "The turkey was almost done! Why'd you take it out early?\n"
								 "You've ruined Thanksgiving!\n\n";
					 else if (count < countToCook)
						 cout << "The turkey is passable but grandma does not approve.\n"
								 "Close but Thanksgiving is still ruined!\n\n";
					 else if (count == countToCook)
					 {
						 cout << "You bring out and serve everyone a perfectly cooked turkey!\n\n";
						 RUINED = false;
					 }
					 turkeyIn = false;
					 break;

	 case EXIT:  cout << "You walk out of the kitchen, leaving the house... outside the\n"
			 	 	  << "wind howls as the bitter-cold snow falls around you, in the\n"
			 	 	  << "distance a lone wolf can be heard... you lay down and just give up.\n\n";
				 RUINED = true;
				 break;

		 default:	cout << "\nSomething went wrong...\n\n";
		 	 	 	RUINED = true;
					break;
	 }



	 if(turkeyIn && !RUINED)
	 {
		cout << "Press Enter to continue...\n\n";
		cin.get(wait);
		// Clear
		system("cls");
		cout << endl;

		cout << "Turn (" << count+1 << ")\n";
	    userChoice = GetAndCheckInp(userChoice, DisplayMenu(), 0, 5);
	 }

	}

	if(userChoice == 0){
		cout << "\nYou walk out of the kitchen, leaving the house... outside the\n"
			  << "wind howls as the bitter-cold snow falls around you, in the\n"
			  << "distance a lone wolf can be heard... you lay down and just give up.\n"
			  << "Grandma will never be happy...\n\n";
		 RUINED = true;
	}

	if(RUINED)
	{
		cout << "Thanksgiving is ruined! Think about what you've done.\n";
				if(userChoice != 0)
				cout << "Press Enter to leave the party in shame...\n\n";
	}
	else
	{
		cout << "Thanksgiving was a success! Everyone loves the turkey!\n"
				"Press Enter to bask in the glory of your cooking skills...\n\n";
	}
	cin.get(wait);



	return 0;
}
