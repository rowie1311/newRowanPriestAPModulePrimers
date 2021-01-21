//wednesday's primers (io streams, file & error handling)
#pragma once 

int primer7(void) {
	std::cout << "\nWelcome to Primer 7";
	return 0;
}

int primer8(void) {
	std::cout << "\nWelcome to Primer 8";
	return 0;
}

int primer9(void) {
	std::cout << "\nWelcome to Primer 9";
  string usernameinput,passinput;
int attempts = 3;//make a var for your attempts, mine has 3 attempts so I've set it to 3. This will countdown with every incorrect validation 
  while(1) {
  cout << "\nPlease Enter Your Username And Password\n\n";

  cout << "Username: "<<endl;
  cin>>usernameinput;
  cout << "Password: "<<endl;
  cin>>passinput;
  

    string username[]={"mike@ada.ac.uk","casper@ada.ac.uk","rowan.ada.ac.uk"};
    string password[]={"1234","1212","8008"};
  
  

    for (int i = 0; i >= 2; i++)
    { //for loop will not work - hopefully can debug later 
      if(usernameinput == username[i] && passinput == password[i] )
      {
        
        cout << "Welcome! " << username[i];
        return 0;//create if statement starting with the 'happy path'. Return 0 so it'll end the program 
        
      }
      
      else if (usernameinput != username[i] && passinput != password[i] && attempts == 1) //this is the 'run out of attempts' path that 'locks' or more closes the program (Could impress mike by making a sleepnow function like for thursday so its locked for 5mins instead.) same as if the username and password are incorrect but add attempts == 1  
      {
        cout << "Failed To Authenticate After 3 Attempts, Please Restart Program";
        return 0;
      }

      else if (usernameinput != username[i] && passinput != password[i])
      {
        
        cout<<"please enter correct username and password\n"<<endl;
        attempts--;//make sure to minus the attempts each time down here 
          cout << "You Have " << attempts << " Attempts Out Of 3 Remaining. ";//lil cout to show user attempts remaining
          break;
      
      }
    };
  } 
}