#ifndef DELIVERY_H
#define DELIVERY_H

class Delivery
{
private:
    int x;
    int y;
    char DeliveryBike[30];
    char DeliveryMenu[30];
    char DeliveryCust[30];
    int DeliveryCustMax;

public:
    Delivery(int x, int y);
    void setDeliveryCust(const char* cust);
    void setDeliveryCustMax(int n);
    void displayDeliveryInfo();
    void setDeliveryMenu(const char* menu);
};

#endif // DELIVERY_H