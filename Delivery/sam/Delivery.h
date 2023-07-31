#ifndef DELIVERY_H
#define DELIVERY_H

class Delivery
{
private:
    int x;
    int y;
    char DeliveryCust[30];
    int DeliveryCustMax;
    char DeliveryMenu[30];

public:
    Delivery(int x, int y);
    void setDeliveryCust(const char* cust);
    void setDeliveryCustMax(int n);
    void setDeliveryMenu(const char* menu);
    void displayDeliveryInfo();
};

#endif  // DELIVERY_H
