#include <iostream>;
#include <iomanip>;
#include <string>;
using namespace std;

class Invoice{
private:
	string partNumber;
	string partDescription;
	int itemQuantity;
	int pricePerItem;
public:
	Invoice(string, string, int, int);
	void setPartNumber(string);
	void setPartDescription(string);
	void setItemQuantity(int);
	void setPricePerItem(int);
	string getPartNumber();
	string getPartDescription();
	int getItemQuantity();
	int getPricePerItem();
	int getInvoiceAmount();
};

Invoice::Invoice(string pN, string pD, int iQ, int pPI){
	partNumber = pN;
	partDescription = pD;
	itemQuantity = iQ;
	pricePerItem = pPI;
}

void Invoice::setPartNumber(string pN){
	partNumber = pN;
}

void Invoice::setPartDescription(string pD){
	partDescription = pD;
}

void Invoice::setItemQuantity(int iQ){

	if (iQ >= 0){
		itemQuantity = iQ;
	}
	else {
		itemQuantity = 0;
	}
	
}

void Invoice::setPricePerItem(int pPI){
	
	if (pPI >= 0){
		pricePerItem = pPI;
	}
	else {
		pricePerItem = 0;
	}

}

string Invoice::getPartNumber(){
	return partNumber;
}

string Invoice::getPartDescription(){
	return partDescription;
}

int Invoice::getItemQuantity(){
	return itemQuantity;
}

int Invoice::getPricePerItem(){
	return pricePerItem;
}

int Invoice::getInvoiceAmount(){
	return itemQuantity * pricePerItem;
}

int main(){

	string tempNumber;
	string tempDescription;
	int tempQuantity;
	int tempPricePerItem;

	cout << "Enter Part Number: ";
	getline(cin, tempNumber);

	cout << "Enter Part Description: ";
	getline(cin, tempDescription);

	cout << "Enter number of items: ";
	cin >> tempQuantity;

	cout << "Enter price per item: $";
	cin >> tempPricePerItem;

	Invoice i(tempNumber, tempDescription, tempQuantity, tempPricePerItem);

	cout << endl;

	cout << "Invoice: " << endl;
	cout << endl;
	cout << setw(4) << "Part Number: " << i.getPartNumber() << endl;
	cout << setw(4) << "Part Description: " << i.getPartDescription() << endl;
	cout << setw(4) << "Item Quantity: " << i.getItemQuantity() << endl;
	cout << setw(4) << "Price Per Item: $" << i.getPricePerItem() << endl;
	cout << endl;
	cout << setw(4) << "Invoice Amount: $" << i.getInvoiceAmount() << endl;

	cout << endl;

	return 0;
}