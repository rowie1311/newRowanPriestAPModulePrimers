//friday's primers (classes and objects)
#pragma once 
using namespace std;

  #define PI 3.14159
  float AreaOfCircle(float radius);
  float AreaWithDiameter(float diameter);

  float AreaOfCircle(float radius) {
	return (PI*(radius*radius));//finds area of circle using radius
}
float AreaWithDiameter(float diameter) {
	return (AreaOfCircle(diameter/2));//finds area of circle using diameter
}

int primer13(void) {
	cout << "\nWelcome to Primer 13 - Finding Area Of A Circle ";
	float radius,diameter,circleArea;
  float AreaOfCircle(float radius);
  float AreaWithDiameter(float diameter);
	char choice='0';
	cout<<"\nFind Area Of Circle"<<endl;
  cout << "\n Enter 1 If Using Radius, 2 If Using Diameter: ";
  cin >> choice;
	for (;choice!='1'&&choice!='2';) {
		cout << choice;
		if(choice!='1'&&choice!='2')
		         cout<<"\n\t\tEnter a VALID Option ";
             break;
	}
	if(choice=='1') {
    cout << " Enter Your Circles Radius: ";
		cin >> radius;
		circleArea=AreaOfCircle(radius);
	} else if(choice=='2') {
    cout << " Enter Your Circles Diameter: ";
		cin >> diameter;
		circleArea=AreaWithDiameter(diameter);
	}
  cout << "  The Area Of Your Circle Is: " << circleArea << endl;
	return 0;
}

int primer14(void) {
	std::cout << "\nWelcome to Primer 14";
	return 0;
}

int primer15(void) {
	std::cout << "\nWelcome to Primer 15";
	return 0;
}