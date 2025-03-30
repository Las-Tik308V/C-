#include <iostream>
#include <windows.h>
using namespace std;

void input();
void mounth();
void calendar();

int dayInMonth, mounth_number, day_number, day_cout;

string mounth_name;

void input()
{
  SetConsoleOutputCP(1251);
  cout << "Введите какой месяц(числом) и номер первого дня месяца";
  cin >> mounth_number;
  cin >> day_number;
}

void mounth()
{
  for (int i = 1; i <= 12; i++)
  {
    switch (i)
    {
    case 1:
      mounth_name = "\t\t\t\tJanuary";
      dayInMonth = 31;
      break;

    case 2:
      mounth_name = "\t\t\t\tFebruary";
      dayInMonth = 28;
      break;

    case 3:
      mounth_name = "\t\t\t\tMarch";
      dayInMonth = 31;
      break;

    case 4:
      mounth_name = "\t\t\t\tApril";
      dayInMonth = 30;
      break;

    case 5:
      mounth_name = "\t\t\t\tMay";
      dayInMonth = 31;
      break;

    case 6:
      mounth_name = "\t\t\t\tJune";
      dayInMonth = 30;
      break;

    case 7:
      mounth_name = "\t\t\t\tJule";
      dayInMonth = 31;
      break;

    case 8:
      mounth_name = "\t\t\t\tAugust";
      dayInMonth = 31;
      break;

    case 9:
      mounth_name = "\t\t\t\tSeptember";
      dayInMonth = 30;
      break;

    case 10:
      mounth_name = "\t\t\t\tOctober";
      dayInMonth = 31;
      break;

    case 11:
      mounth_name = "\t\t\t\tNowember";
      dayInMonth = 30;
      break;

    case 12:
      mounth_name = "\t\t\t\tDecember";
      dayInMonth = 31;
      break;
    }
  }

  void calendar();
  {
    cout << mounth_name << endl;

    cout << "Пн  Вт  Ср  Чт  Пт  Сб  Вс" << endl;

    for (int day = 1; day <= day_number; day++)
    {
      cout << day << "\t";
      if ((day + day_number) % 7 == 0 || day == day_cout)
      {
        cout << endl;
      }
    }

    cout << "\n\n\n\n";
  }
  int main()
  {
    input();
    mounth();
    calendar();
  }
}
