#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Delivery.h"

Delivery::Delivery(int x, int y)
    : x(x), y(y), DeliveryCustMax(0)
{
    DeliveryCust[0] = '\0';
    DeliveryMenu[0] = '\0';
    std::cout << "���ο� ��� ������ �����Ǿ����ϴ�. ��ġ: (" << x << ", " << y << ")\n";
}

void Delivery::setDeliveryCust(const char* cust)
{
    strcpy(DeliveryCust, cust);
    std::cout << "��� ��: " << DeliveryCust << "\n";
}

void Delivery::setDeliveryCustMax(int n)
{
    DeliveryCustMax = n;
    std::cout << "�ִ� �� �κ�: " << DeliveryCustMax << "\n";
}

void Delivery::setDeliveryMenu(const char* menu)
{
    strcpy(DeliveryMenu, menu);
    std::cout << "��� �޴�: " << DeliveryMenu << "\n";
}

void Delivery::displayDeliveryInfo()
{
    std::cout << "��� ��ġ: (" << x << ", " << y << ")\n";
    std::cout << "��� �޴�: " << DeliveryMenu << "\n";
    std::cout << "��� ��: " << DeliveryCust << "\n";
    std::cout << "�ִ� �� �κ�: " << DeliveryCustMax << "\n";
}


