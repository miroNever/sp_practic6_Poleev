// practic6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
using namespace std;



//int function(char line[]) {
//    gets_s(line, 1000);   
//    int lenght = strlen(line);
//    int count = 0;   
//    bool charspase = false;
//    for (int i = 0; i < lenght; i++) {
//        if (!isspace(line[i])) {
//            if (isalnum(line[i + 1])) {
//                if (!charspase) {
//                    charspase = true;
//                    count++;
//                }
//                else
//                    continue;
//            }
//        }
//        else
//            charspase = false;
//    }
//    return count;
//}
bool isPunk(char c)
{
    return strchr(".?!@#$%%^&*()_+=-<>", c) != nullptr;
}
int function(char line[]) {
    gets_s(line, 1000);    int lenght = strlen(line);
    int count = 0;    bool charspase = false;
    for (int i = 0; i < lenght; i++)
    {
        if (!isspace(line[i]))
        {
            if (isalnum(line[i + 1]))
            {
                if (!charspase)
                {
                    charspase = true;                    
                    count++;
                }
                else
                    continue;
            }
        }
        else
            charspase = false;
    }
    return count;
}int main()
{
    setlocale(LC_ALL, "ru");
    int count;
    cout << "Введите строку: ";
    char line[1000];
    count = function(line);
    printf("Слов в строке: %d", count);
}
