#include <iostream>
using namespace std;
class Order{
protected:
  int OID[];
  int OrderStatus[];
  bool confirmation;

public:
  void PlaceOrder();
  void setOrderStatus();
  void displayOrder();
  bool confirmOrder();
};
