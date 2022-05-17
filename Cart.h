#include <iostream>
#include "Order.h"
using namespace std;

class Cart{
  protected:
    int cartID;
    int productID;
    int quantity;
    float Total;
  public:
    void displayCart();
    void addItem();
    void changeQuantity();
    void checkOut();
    void setTotal();
};
