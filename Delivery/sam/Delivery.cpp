#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Delivery.h"

Delivery::Delivery(int x, int y)
{
    this->x = x;
    this->y = y;
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

int main()
{
    Delivery delivery(10, 20); // 배달 객체 생성
    char cust[30];
    std::cout << "배달 고객 이름을 입력하세요: ";
    std::cin.getline(cust, sizeof(cust)); // 공백을 포함한 문자열 입력 받음
    delivery.setDeliveryCust(cust); // 배달 고객 설정
    int max;
    std::cout << "최대 배달 고객 수를 입력하세요: ";
    std::cin >> max;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 버퍼 비우기
    delivery.setDeliveryCustMax(max); // 최대 배달 고객 수 설정

    if (max > 30) {
        std::cout << "배달 메뉴 수를 초과하였습니다.\n";
        return 0;
    }

    char menu[30];
    std::cout << "배달 메뉴를 입력하세요: ";
    std::cin.getline(menu, sizeof(menu));
    delivery.setDeliveryMenu(menu); // 배달 메뉴 설정

    // 배달 정보 출력
    std::cout << "=== 배달 정보 ===\n";
    delivery.displayDeliveryInfo();

    return 0;
}

