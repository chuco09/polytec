#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Delivery.h"

Delivery::Delivery(int x, int y)
{
    this->x = x;
    this->y = y;
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

int main()
{
    Delivery delivery(10, 20); // ��� ��ü ����
    char cust[30];
    std::cout << "��� �� �̸��� �Է��ϼ���: ";
    std::cin.getline(cust, sizeof(cust)); // ������ ������ ���ڿ� �Է� ����
    delivery.setDeliveryCust(cust); // ��� �� ����
    int max;
    std::cout << "�ִ� ��� �� ���� �Է��ϼ���: ";
    std::cin >> max;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ���� ����
    delivery.setDeliveryCustMax(max); // �ִ� ��� �� �� ����

    if (max > 30) {
        std::cout << "��� �޴� ���� �ʰ��Ͽ����ϴ�.\n";
        return 0;
    }

    char menu[30];
    std::cout << "��� �޴��� �Է��ϼ���: ";
    std::cin.getline(menu, sizeof(menu));
    delivery.setDeliveryMenu(menu); // ��� �޴� ����

    // ��� ���� ���
    std::cout << "=== ��� ���� ===\n";
    delivery.displayDeliveryInfo();

    return 0;
}

