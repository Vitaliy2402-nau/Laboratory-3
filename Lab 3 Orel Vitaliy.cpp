#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;


int main() 
{
float Y;
int switch_on;
cout <<"Input"<<endl;
cin>>switch_on;
 switch(switch_on){
case 1:{
	break;
	double a=2.8,b=2.1,x=0.1,z=log10(a);
 for (x= 5.2; x<=10;x+=0.2){
 	if (x< -log(a))
 {
Y = 2.8 * pow(sin(a*x), 2) - b * pow(x, 3)*z;
cout<<"X: "<<x<<"If number 1 and Y"<<Y<<endl;
 }
 else if  ((-log10(a) <= x) && (x <= b))
 {
     Y= pow(a, b) - pow(cos(a +z*x), 3);
 	cout<<"X:"<<x<<"If number 2 and Y: "<<Y<<endl;
 }
  else if (x>b);
 {
 	Y=sqrt(abs(2.5*pow(a, 3) + pow(b - z*pow(x, 2), 6)));
 	cout<<"X:"<<x<<" If number 3 ant Y:"<<Y<<endl;
 }
}
cout<<"Done"<<endl;
break;
}
case 2: {
	double a=6.7,b=3.3,x=0.1,z=log10(b);
	while (x <= 1){
	if (x< -log10(a))
 {
Y = 2.8 * pow(sin(a*x), 2) - b * pow(x, 3)*z;
 cout<<"X: "<<x<<"If number 1 and Y"<<Y<<endl;
 }
 else if  ((-log10(a) <= x) && (x <= b))
 {
    Y= pow(a, b) - pow(cos(a +z*x), 3);
 	cout<<"X:"<<x<<"If number 2 and Y: "<<Y<<endl;
 }
 else if (x > b);
 {
 	Y=sqrt(abs(2.5*pow(a, 3) + pow(b - z*pow(x, 2), 6)));
 	cout<<"X:"<<x<<" If number 3 ant Y:"<<Y<<endl;
 }
 x+=0.3;
}
cout<<"Done"<<endl;
break;
}
case 3: {
double a=14.2,b=4.2,x=0.1,z=log10(a*b);
do{
	if (x< -log10(a))
 {
Y = a*pow(sin(x), 2) - b * pow(x, 3)*z;
cout<<"X: "<<x<<"If number 1 and Y"<<Y<<endl;
 }
 else if  ((-log10(a) <= x) && (x <= b))
 {
 	Y= pow(a, b) - pow(cos(a +z*x), 3);
 	cout<<"X:"<<x<<"If number 2 and Y: "<<Y<<endl;
 }
 else if (x>b);
 {
 	Y=sqrt(abs(2.5*pow(a, 3) + pow(b - z*pow(x, 2), 6)));
 	cout<<"X:"<<x<<" If number 3 ant Y:"<<Y<<endl;
 }
 x+=0.3;
}while (x<=2);
cout<<"Done"<<endl;
break;
	}
	default:
	cout<<"Can not be done.";
	break;
}
return 0;
}	

