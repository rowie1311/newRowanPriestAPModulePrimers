//tuesday's primers (data types, manipulation & structures)
#pragma once 
#include "chrono"
#include "thread"

  void lockedout(int seconds) 
{
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

int primer4(void) {
  	cout << "\nWelcome to Primer 4 - Account Validation\n\n";


string usernameinput,passinput;
int attempts = 3;//make a var for your attempts, mine has 3 attempts so I've set it to 3. This will countdown with every incorrect validation 
  
  cout << "\nPlease Enter Your Username And Password\n\n";
  while(true) {
  cout << "Username: "<<endl;
  cin>>usernameinput;
  cout << "Password: "<<endl;
  cin>>passinput;
  

  string username[]={"mike","casper","rowan"};
  string password[]={"1234","1212","8008"};
  
  
      
    for (int i = 0; i > 2; i++) { //for loop will not work - hopefully can debug later enter mike@ada.ac.uk for username and 1234 for password to show validation works 
      if(usernameinput == username[i] && passinput == password[i] )
      {
        
        cout << "Welcome! " << username[i];
        return 0;//create if statement starting with the 'happy path'. Return 0 so it'll end the program 
        
      }
      
      else if (usernameinput != username[i] && passinput != password[i] && attempts == 1) //this is the 'run out of attempts' path that 'locks' or more closes the program (Could impress mike by making a sleepnow function like for thursday so its locked for 5mins instead.) same as if the username and password are incorrect but add attempts == 1  
      {
        
        cout << "Failed To Authenticate After 3 Attempts, Locked For 5 Seconds. Please Wait Or Restart Programme";
        //lockedout(5);
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
  };
};

int primer5(void) {
	std::cout << "\nWelcome to Primer 5 - Password Strength Checker\n\n";
    int l_case=0, u_case=0, digit=0, special=0;
  string str;
  while(1) {
  cout<<"Enter Desired Password\n(Must Include A Capital, Special Character And Number): "<<endl;
  
  cin>>str;
  int l=str.length(),i;
  
  for(i=0;i<l;i++)
  {
    if(islower(str[i]))
      l_case=1;
    if(isupper(str[i]))
      u_case=1;
    if(isdigit(str[i]))
      digit=1;
    if(!isalpha(str[i]) && !isdigit(str[i]))
      special=1;  
  }
  
  if(l_case && u_case && digit && special && l>=8) 
  {
    cout<<"Strong password."<<endl;
    break;
  }
  else if((l_case+u_case+digit+special>=3) && l>=6)
  {
    cout<<"Moderate password"<<endl;
    break;
  }
  else 
  {
  
    cout<<"Password Too Weak; Try Again. Make Sure To Include Special Characters And Numbers "<<endl;
  }
    
  }
    
  
};

  int removeEmployee(string employees[], string r, int s) {
    for(int i = 0; i < s; i++) {
       if(r == employees[5]) {
        break;
        } else if(employees[i] == r){
          employees[i] = employees[i + 1];
          for(int j = i + 1; j < s-1; j++) {
            employees[j] = employees[j+1];
          }
        }
        }
        s--;
        cout << "\nThere are "<< s << " employees";
        for (int i = 0 ; i < s; i++) {
          cout<< "\n" << employees[i];
        }
  return 0;
};

int primer6(void) {
	cout << "\nWelcome to Primer 6 - Remove Employees From List ";

string employees[6] = {"Rowan Priest","Jonathan Davies","Charlie Hodgekinson", "Charles Wilson", "Emily Buckley", "Lewis Keech"};
string remployee;

int arrSize = sizeof(employees)/sizeof(employees[0]);

for (int i = 0; i < arrSize; i++) {
  cout << employees[i] << endl;
}

cout << "\nType An Employee You'd Like To Remove:" << endl;
//cin.ignore();
getline(cin, remployee);
//cout << remployee;

removeEmployee(employees, remployee, arrSize);
}
