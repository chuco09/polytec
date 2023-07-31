#define _CRT_SECURE_NO_WARNINGS
#include "Table.h"
#include <iostream>

Table::Table()
{
    TableCust = ' ';
    TableSit = ' ';
    TableRobot = ' ';
    TableMenu = ' ';
}

Table::Table(char cust, char sit, char robot, char menu)
{
    TableCust = cust;
    TableSit = sit;
    TableRobot = robot;
    TableMenu = menu;
}

void Table::SetTable(char cust, char sit, char robot, char menu)
{
    TableCust = cust;
    TableSit = sit;
    TableRobot = robot;
    TableMenu = menu;
}

void Table::GetTable(char& cust, char& sit, char& robot, char& menu) const
{
    cust = TableCust;
    sit = TableSit;
    robot = TableRobot;
    menu = TableMenu;
}

void Table::GetTable(char& cust, char& sit, char& robot, char& menu)
{
    cust = TableCust;
    sit = TableSit;
    robot = TableRobot;
    menu = TableMenu;
}

void AddTable(std::vector<Table>& tables, char cust, char sit, char robot, char menu)
{
    Table table(cust, sit, robot, menu);
    tables.push_back(table);
}

void PrintTables(const std::vector<Table>& tables)
{
    for (const auto& table : tables)
    {
        char cust, sit, robot, menu;
        table.GetTable(cust, sit, robot, menu);
        std::cout << "Table: " << cust << ", Sit: " << sit << ", Robot: " << robot << ", Menu: " << menu << std::endl;
    }
}