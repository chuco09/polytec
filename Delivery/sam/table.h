#ifndef TABLE_H
#define TABLE_H

#include <vector>

class Table
{
public:
    char TableCust;
    char TableSit;
    char TableRobot;
    char TableMenu;

public:
    Table();
    Table(char cust, char sit, char robot, char menu);
    void SetTable(char cust, char sit, char robot, char menu);
    void GetTable(char& cust, char& sit, char& robot, char& menu) const;
    void GetTable(char& cust, char& sit, char& robot, char& menu);
};

void AddTable(std::vector<Table>& tables, char cust, char sit, char robot, char menu);
void PrintTables(const std::vector<Table>& tables);

#endif  // TABLE_H