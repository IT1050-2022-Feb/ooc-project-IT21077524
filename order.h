#include <iostream>
using namespace std;
class Order{
private:
  int OID;
  int OrderStatus;
  bool confirmation;

public:
  Order(int pOID,int pOrderStatus,bool pconfirmation) ;
  {
     pOID=OID;
     pOrderStatus=OrderStatus;
     pconfirmation=confirmation;
  }
  void setOrderStatus();
  void displayOrder();
  bool confirmOrder();
};
