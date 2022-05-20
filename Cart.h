#include <iostream>
using namespace std;

class Cart{
  private:
    int cartID;
    int productID;
    int quantity;
    float Total;
  public:
    Cart(int scartID, int sproductID,int squantity,float sTotal)
    {
      scartID=cartID;
      sproductID=productID;
      squantity=quantity;
      sTotal=Total;
    }
    void displayCart();
    void addItem();
    void changeQuantity();
    void checkOut();
    void setTotal();
};
