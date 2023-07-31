#include <iostream>
#include <vector>
#include "Table.h"
#include "Delivery.h"

int main()
{
    std::vector<Table> tables;

    // 테이블 추가
    AddTable(tables, 'A', 'O', 'R', 'M');
    AddTable(tables, 'B', 'X', 'R', 'M');
    AddTable(tables, 'C', 'Y', 'R', 'M');

    // 테이블 정보 출력
    PrintTables(tables);

    // 정원 확인
    int totalSeats = 0;
    for (const auto& table : tables)
    {
        char cust, sit, robot, menu;
        table.GetTable(cust, sit, robot, menu);
        totalSeats += sit;
    }

    if (totalSeats > 50)
    {
        std::cout << "초과했습니다!" << std::endl;
    }

    // 배달 객체 생성
    Delivery delivery(10, 20);

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
