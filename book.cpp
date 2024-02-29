#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void add_book(string bookName, string library[10]){
	for(int i=0;i<10;i++){
		if(library[i]=="none"){
			library[i]=bookName;
			break;
		}
	}
}
			
void remove_book(string bookName, string library[10]){

	for(int i=0;i<10;i++){
		if(library[i]==bookName){
			library [i]="none";
		}
	}
}
void find_book(string bookName, string library[10]){
	for(int i=0;i<10;i++){
		if(library[i]==bookName){
			cout << "This book is located in " << i+1;
			return;
		}
		
	}
	cout << "No book found by the name " << bookName;
}
int main() {
	string library[10];
	for(int i=0;i<10;i++){
		library[i]="none";
	}
	while(true){
		string command;
		int M;
		cin >> command;
		if(command=="add_book"){
			string bookName;
			cin >> bookName;
			add_book(bookName, library);
			
		}
			if(command=="find_book"){
			string bookName;
			cin >> bookName;
			find_book(bookName, library);
				
		}
			
		else if(command=="show_library"){
			for(int i=0;i<10;i++){
				cout << i+1 << "_"<< library[i] << endl;
			} 
		}
		else if(command=="remove_book"){
			string bookName;
			cin >> bookName;
			remove_book(bookName, library);
		}
	}
	
	
}
