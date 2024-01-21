#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>
#include <locale>
#include <codecvt>
class modAlphaWood
{
private:
    int key1; // кол-во столбцов
public:
    modAlphaWood()=delete; // запрет конструктора без параметров
    modAlphaWood(const int& key) :key1(key) {};
    std::wstring encrypt(const std::wstring& open_text); // зашифрование
    std::wstring decrypt(const std::wstring& cipher_text); // расшифрование
};
