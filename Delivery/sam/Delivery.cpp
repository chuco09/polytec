#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Delivery.h"

Delivery::Delivery(int x, int y)
    : x(x), y(y), DeliveryCustMax(0)
{
    DeliveryCust[0] = '\0';
    DeliveryMenu[0] = '\0';
    std::cout << "새로운 배달 정보가 생성되었습니다. 위치: (" << x << ", " << y << ")\n";
}

void Delivery::setDeliveryCust(const char* cust)
{
    strcpy(DeliveryCust, cust);
    std::cout << "배달 고객: " << DeliveryCust << "\n";
}

void Delivery::setDeliveryCustMax(int n)
{
    DeliveryCustMax = n;
    std::cout << "최대 몇 인분: " << DeliveryCustMax << "\n";
}

void Delivery::setDeliveryMenu(const char* menu)
{
    strcpy(DeliveryMenu, menu);
    std::cout << "배달 메뉴: " << DeliveryMenu << "\n";
}

void Delivery::displayDeliveryInfo()
{
    std::cout << "배달 위치: (" << x << ", " << y << ")\n";
    std::cout << "배달 메뉴: " << DeliveryMenu << "\n";
    std::cout << "배달 고객: " << DeliveryCust << "\n";
    std::cout << "최대 몇 인분: " << DeliveryCustMax << "\n";
}


