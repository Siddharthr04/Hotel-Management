#include<iostream>
using namespace std;

int main(){
	int quantity;
	int choice;
	
	int quant_rooms = 0, quant_pizza = 0, quant_pasta = 0, quant_burger = 0, quant_chicken = 0, quant_noodles = 0;    //quantity of food we have
	int sold_rooms = 0, sold_pizza = 0, sold_pasta = 0, sold_burger = 0, sold_chicken = 0, sold_noodles = 0;          //quantity of food we sold
	int total_rooms = 0, total_pizza = 0, total_pasta = 0, total_burger = 0, total_chicken = 0, total_noodles = 0;    //price\
	
	cout << "\n\t\t\t\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> quant_rooms;
	cout << "\n Quantity of pasta: ";
	cin >> quant_pasta;
	cout << "\n Quantity of pizza: ";
	cin >> quant_pizza;
	cout << "\n Quantity of burger: ";
	cin >> quant_burger;
	cout << "\n Quantity of chicken-roll: ";
	cin >> quant_chicken;
	cout << "\n Quantity of noodles: ";
	cin >> quant_noodles;
	
	m:
	cout << "\n\t\t\t Please select from the given menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Pizza";
	cout << "\n4) Burger";
	cout << "\n5) Chicken";
	cout << "\n6) Noodles";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";
	
	cout << "\n\n Please Enter your choice: ";
	cin >> choice;
	
	switch(choice){
		case 1: 
			cout << "\n\n Enter the number of rooms you want: ";
			
			cin >> quantity;
			if(quantity - sold_rooms >= quantity){
				sold_rooms += quantity;
				total_rooms += quantity * 1200;
				cout << "\n" << quantity << "room/rooms have been alloted to you ";
			}
			else
				cout << "\n Only " << quant_rooms - sold_rooms << " rooms remaining in the hotel";
				
				break;
				
				case 2: 
			cout << "\n\n Enter Pasta quantity: ";
			
			cin >> quantity;
			if(quant_pasta - sold_pasta >= quantity){
				sold_pasta += quantity;
				total_pasta += quantity * 250;
				cout << "\n"  << quantity << " pasta is the order ";
			}
			else
				cout << "\n Only " << quant_pasta - sold_pasta << " pasta remaining in the hotel";
				
				break;
				
				case 3: 
			cout << "\n\n Enter Pizza quantity: ";
			
			cin >> quantity;
			if(quant_pizza - sold_pizza >= quantity){
				sold_pizza += quantity;
				total_pizza += quantity * 120;
				cout << "\n" << quantity << " pizza is the order ";
			}
			else
				cout << "\n Only " << quant_pizza - sold_pizza << " pizza remaining in the hotel";
				
				break;
				
				case 4: 
			cout << "\n\n Enter Burger quantity: ";
			
			cin >> quantity;
			if(quant_burger - sold_burger >= quantity){
				sold_burger += quantity;
				total_burger += quantity * 120;
				cout << "\n" << quantity << " burger is the order ";
			}
			else
				cout << "\n Only " << quant_burger - sold_burger << " burgers remaining in the hotel";
			
				break;
				
				case 5: 
			cout << "\n\n Enter chicken-roll quantity: ";
			
			cin >> quantity;
			if(quant_chicken - sold_chicken >= quantity){
				sold_chicken += quantity;
				total_chicken += quantity * 150;
				cout << "\n"  << quantity << " chicken-roll is the order ";
			}
			else
				cout << "\n Only " << quant_chicken - sold_chicken << " chicken-roll remaining in the hotel";
			
				break;
				
				case 6: 
			cout << "\n\n Enter Noodles quantity: ";
			
			cin >> quantity;
			if(quant_noodles - sold_noodles >= quantity){
				sold_noodles += quantity;
				total_noodles += quantity * 140;
				cout << "\n" << quantity << " noodles is the order ";
			}
			else
				cout << "\n Only " << quant_noodles - sold_noodles << " noodles remaining in the hotel";
			
				break;
				
				case 7: 
			cout << "\n\t\t Details of sales and collection: ";
			cout << "\n\n Number of rooms we had: " << quant_rooms;
			cout << "\n\n Number of rooms we gave for rent: " << sold_rooms;
			cout << "\n\n Remainig rooms: " << quant_rooms - sold_rooms;
			cout << "\n\n Total rooms collection for the day: " << total_rooms;
			
			cout << "\n\n Number of pasta we had: " << quant_pasta;
			cout << "\n\n Number of pasta we sold: " << sold_pasta;
			cout << "\n\n Remainig pasta: " << quant_pasta - sold_pasta;
			cout << "\n\n Total pasta collection for the day: " << total_pasta;
			
			cout << "\n\n Number of pizza we had: " << quant_pizza;
			cout << "\n\n Number of pizza we sold: " << sold_pizza;
			cout << "\n\n Remainig pizza: " << quant_pizza - sold_pizza;
			cout << "\n\n Total pizza collection for the day: " << total_pizza;
			
			cout << "\n\n Number of burgers we had: " << quant_burger;
			cout << "\n\n Number of burgers we sold: " << sold_burger;
			cout << "\n\n Remainig burgers: " << quant_pasta - sold_burger;
			cout << "\n\n Total burger collection for the day: " << total_burger;
			
			cout << "\n\n Number of chicken-rolls we had: " << quant_chicken;
			cout << "\n\n Number of chicken-rolls we sold: " << sold_chicken;
			cout << "\n\n Remainig chicken-rolls: " << quant_chicken - sold_chicken;
			cout << "\n\n Total chicken-rolls collection for the day: " << total_chicken;
			
			cout << "\n\n Number of noodles we had: " << quant_noodles;
			cout << "\n\n Number of noodles we sold: " << sold_noodles;
			cout << "\n\n Remainig noodles: " << quant_pasta - sold_noodles;
			cout << "\n\n Total noodles collection for the day: " << total_noodles;
			
			cout<< "\n\n\n Total collection for the day: " << total_rooms + total_pasta + total_pizza + 
			total_burger + total_chicken + total_noodles; 
			break;
			
			case 8:
				exit(0);
				
				default:
					cout << "\n Please select the number that are mentioned above"; 
	}
	goto m;
}
