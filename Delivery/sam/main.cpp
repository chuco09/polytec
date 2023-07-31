#include <iostream>
#include <vector>
#include "Table.h"
#include "Delivery.h"

int main()
{
    std::vector<Table> tables;

    // ���̺� �߰�
    AddTable(tables, 'A', 'O', 'R', 'M');
    AddTable(tables, 'B', 'X', 'R', 'M');
    AddTable(tables, 'C', 'Y', 'R', 'M');

    // ���̺� ���� ���
    PrintTables(tables);

    // ���� Ȯ��
    int totalSeats = 0;
    for (const auto& table : tables)
    {
        char cust, sit, robot, menu;
        table.GetTable(cust, sit, robot, menu);
        totalSeats += sit;
    }

    if (totalSeats > 50)
    {
        std::cout << "�ʰ��߽��ϴ�!" << std::endl;
    }

    // ��� ��ü ����
    Delivery delivery(10, 20);

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
