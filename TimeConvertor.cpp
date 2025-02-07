#include <iostream>
using namespace std;
	
	//Function to Convert Hours into Seconds
	void HoursIntoSeconds(int hours){
		int HourSeconds = hours * 3600;
		cout<<endl <<hours <<"Hours is Equivalent to " <<HourSeconds <<" Seconds.\n";
	}
	//Function to convert hours into minutes
	void HoursIntoMinutes(int hours){
		int HourMinutes = hours * 60;
		cout<<endl <<hours <<"Hours is Equivalent to " <<HourMinutes <<" Minutes.\n";
	}
	//Function to convert Minutes into Seconds
	void MintuesIntoSeconds(int minutes){
		int MinuteSeconds = minutes * 60;
		cout<<endl <<minutes <<" Minutes is Equivalent to " <<MinuteSeconds <<" Seconds.\n";
	}
	//Funtion to Convert Minutes into Hours
	void MintuesIntoHours(int minutes){
		int MinuteHours = minutes / 60;
		cout<<endl <<minutes <<" Minutes is Equivalent to " <<MinuteHours <<" Hours.\n";
	}

int main(){
	
	cout<<"----- Time Convertor -----\n";
	
	int choice = 0;
	int minutes,seconds,hours;
	
	while(choice!=5){
	
	cout<<"\nEnter your Choice : \n";
	cout<<"1.Hours into Seconds\n";	
	cout<<"2.Hours into Minutes\n";
	cout<<"3.Minutes into Seconds\n";
	cout<<"4.Minutes into Hours\n";
	cout<<"5.Exit\n";
	
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter Hours: ";
			cin>>hours;
			HoursIntoSeconds(hours);
			break;
	
		case 2:
			cout<<"Enter Hours: ";
			cin>>minutes;
			HoursIntoMinutes(minutes);
			break;
			
		case 3:
			cout<<"Enter Minutes: ";
			cin>>minutes;
			MintuesIntoSeconds(minutes);
			break;
		
		case 4:
			cout<<"Enter Minutes: ";
			cin>>minutes;
			MintuesIntoHours(minutes);
			break;
		
		case 5:
			break;
		
		default:
			cout<<"Invalid Choice!.\n";
		}
	}	
}
