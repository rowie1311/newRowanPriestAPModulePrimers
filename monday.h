//monday's primers (basic programming)
#pragma once //a common preprocessor directive that helps avoid repeated inclusions of the same file
using namespace std;

int primer1(void) {
  cout << "\nWelcome to Primer 1 - Farenheit/Celcius converter" << endl;//This program helps convert celcius/farenheit/kelvin 
 
  float temperature, fahrenheit, celsius, kelvin, newtemp1, newtemp2;
  int option, option2;

  cout << "Enter your temperature: ";
  cin >> temperature;//User enters their temperature
  cout << "Is that in Celcius(1), Farenheit(2) or Kelvin(3)?: ";//User confirms if their initial temp is in C/F/K
  cin >> option;
  cout << "Would you like to convert it to Farenheit(1), Celcius(2) or Kelvin(3)?: ";//then user will select if they want it confirmed to C/K/F. 
  cin >> option2;

  
    if (option == 1 && option2 == 1) //if statement to cycle through each option and perform the correct calculation
    {
      newtemp1 = (temperature * 9/5) + 32;
      cout << "The temperature in Celsius : " << temperature << endl;
      cout << "The temperature in Fahrenheit : " << newtemp1 << endl;
    }
    else if (option == 1 && option2 == 3) 
    {
      newtemp1 = temperature + 273.15;
      cout << "The temperature in Celsius : " << temperature << endl;
      cout << "The temperature in Kelvin : " << newtemp1 << endl;
    }
    else if (option == 2 && option2 == 2)
    {
      newtemp1 =(temperature - 32)* 5/9;
      cout << "The temperature in Farenheit : " << temperature << endl;
      cout << "The temperature in Celcius : " << newtemp1 << endl;
    }
    else if (option == 2 && option2 == 3)
    {
      newtemp1 =(temperature - 32) * 5/9;
      newtemp2 = newtemp1 + 273.15;
      cout << "The temperature in Farenheit : " << temperature << endl;
      cout << "The temperature in Kelvin : " << newtemp2 << endl; 
    }
      else if (option == 3 && option2 == 2)
    {
      newtemp1 = temperature - 273.15;
      cout << "The temperature in Kelvin : " << temperature << endl;
      cout << "The temperature in Celcius : " << newtemp1 << endl;
    }
    else if (option == 3 && option2 == 1)
    {
      newtemp1 = temperature - 273.15;
      newtemp2 = (newtemp1 * 9/5) + 32;
      cout << "The temperature in Kelvin : " << temperature << endl;
      cout << "The temperature in Farenheit : " << newtemp2 << endl;
    }
    else 
    {
      std::cout << "\n' Is an invalid option  - please try again.";
      
      return 0;
    }
  return 0;
}

int primer2(void) {
  
  	cout << "\nWelcome to Primer 2:\nNumber guessing game" << endl;

  {
	 int num, guess, tries = 0, difficulty;

   cout << "Please select a level of difficulty (1, 2 or 3): ";
   cin >> difficulty; //user first selects difficulty
    while(1)
    {
      if(cin.fail()) //if statement checks if the input failed ie: user entered data not viable (eg a char)
      {
        cin.clear(); //then clears input
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter an integer"<<endl;
        cin >> difficulty; //notifies user to enter a correct input
      }
      if(!cin.fail()) //if input does not fail then this while loop breaks and code continues
        {
          break;
        }
    }
	
  if (difficulty == 1) 
  {
  srand(time(0)); 
	num = rand() % 10 + 1; //for difficulty 1, this var randomly finds a number between 1 and 10
	cout << "Guess My Number Game\n\n";
  do
	{
		cout << "Enter a guess between 1 and 10 : ";
		cin >> guess;
    
      while(1)
      {
        if(cin.fail()) //This if staement works similarly to the one above, checking the user entered the correct data type
        {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"Please enter an integer"<<endl;
         tries++; 
         cin >> guess;
        }
        if(!cin.fail()) 
        {
         break;
        }
      }
    
    tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else 
    {
      switch(tries) //A switch case to give user different flavour text depending on how many guesses they get the number in 
      {
        case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      }
    }
	} 
 
  while (guess != num);
    return 0;
  }


  else if (difficulty == 2)
  {
  srand(time(0)); 
	num = rand() % 100 + 1; //same as before but increased difficulty by making it between 1 and 100
	cout << "Guess My Number Game\n\n";
  do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;

    while(1)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter an integer"<<endl;
        tries++; 
        cin >> guess;
      }
      if(!cin.fail()) 
      {
        break;
      }
    }
		tries++;

		if (guess > num) 
    {
			cout << "Too high!\n\n";
    }
		else if (guess < num) 
    {
			cout << "Too low!\n\n";
    }
		else 
    {
		  switch(tries) 
      {
        case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;

        default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      }
    }
	} 
    while (guess != num);
      return 0;
  }


  else if (difficulty == 3)
  {
    srand(time(0)); 
	  num = rand() % 1000 + 1; //same as before but now between 1 and 1000
	  cout << "Guess My Number Game\n\n";
  do
	 {
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
      while(1)
      {
        if(cin.fail())
        {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"Please enter an integer"<<endl;
         tries++; 
         cin >> guess;
        }
       if(!cin.fail()) 
       {
          break;
       }
      }

		tries++;

		if (guess > num)
    {
			cout << "Too high!\n\n";
    }
		else if (guess < num)
    {
			cout << "Too low!\n\n";
    }
		else 
    {
      switch(tries) 
      {
      case 1: cout << "Wow, are you a mind reader?!?\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again"; break;
      case 2 ... 4: cout << "Well done, most impressive\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      case 5 ... 7: cout << "Good, but I'm sure you can do better!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      default: cout << "You got it but try again to get a higher score!\n" << "You guessed " << num << " in: " << tries << " tries.\n\nRestart program to play again."; break;
      }
    }

	 }  while (guess != num);
       return 0;
  }

  else 
    {
    
      std::cout << "\n Invalid Option  - Please Try Again.";
      
      return 0;
    }
  }
}


int primer3(void) {
	cout << "\nWelcome to Primer 3";
    cout << "\nWelcome to Primer 3 Self Checkout Programme: \n\n";

int productnumber = 1, quantity;
float price, total, subtotal, tax, taxcalc, actualtotal = 0.00;

while (1) {
  cout << "\nPlease Enter The Quantity Of Item " << productnumber << " You Would Like (Enter 0 to finish): " ;
  cin >> quantity;//user enters how many of the product theyd like 
  
  while (1)
  {
      if(cin.fail())//checks if the input is valid else itll show an error
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please Enter A Valid Quantity"<<endl;
        cin >> quantity;
      }
      if (quantity == 0 && actualtotal >= 0.01)//when the user enters 0 and the actual total = 0 then the user will exit programme, else it will take user to final total and tax calculation
      {
        tax = 5.5;
        taxcalc = (tax / 100) * actualtotal;
        cout << "Your subtotal is: " << actualtotal << "\nShipping Tax (5.5%): " << taxcalc << endl;
        total = taxcalc + actualtotal;
        cout << "\nYour Total For This Shopping Is: " << total << endl;

      }
      if (quantity == 0) 
      {
        cout << "Thank You For Visiting, We Hope To See You Again :)\n";
        return 0;
      }
      if(!cin.fail()) 
      {
        break;
      }
  }
    cout << "So, You Would Like: " << quantity << " of Item " << productnumber;//tells user product number and the quantity they want

    cout << "\n\nPlease Enter The Price for Item " << productnumber << " (Please use 0.00 format): ";
    cin >> price; //user enters price for product

      while (1) {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please Enter A Valid Price"<<endl;
        cin >> price;
      }
      if(!cin.fail()) 
      {
        break;
      }
      }

    cout << price;
    subtotal = price * quantity;
    actualtotal = actualtotal + subtotal;
    cout << "\nSubtotal so far: " << actualtotal;
    productnumber++;//when they finish inputing quantity and price, it will add the price to the runningtotal and now go onto the next product and start again 
  }
  
};