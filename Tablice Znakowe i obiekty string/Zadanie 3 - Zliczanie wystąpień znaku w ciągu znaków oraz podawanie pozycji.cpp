#include <iostream>

using namespace std;
int main(){

int suma=0;
 string tekst;
 cout <<"podaj pelny tekst ";
 getline(cin, tekst);
 char znak;
 cout << "podaj znak ktory ma zostac wyszukany ";
 cin >> znak;
 for (int i = 0; i <tekst.length(); i+=1){
 if (tekst[i] == znak){
 suma+=1;
}
}
	cout << suma;
	
	
	
}