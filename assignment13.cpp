#include<iostream>
using namespace std;
class fastFood {
 private:
 int totalPizzas;
 public:
 fastFood() { totalPizzas=5; }
 int getPizzaQty() { 
      return totalPizzas;
    }
};
class drinksClass {
private:
int totalCoke;
public:
 drinksClass() { totalCoke=5; }
 int getCokeQty() { return totalCoke;}
};
class generate_bill: public drinksClass, public fastFood {
private:
int pizzaPrice;
 int cokePrice;
public:
 generate_bill() { pizzaPrice=120; cokePrice=55;}
 void printInvoice() {
cout<<getPizzaQty()*pizzaPrice + getCokeQty() * cokePrice<<endl;
 }
};


int main() {
 generate_bill obj; obj.printInvoice();
 return 0;
}

