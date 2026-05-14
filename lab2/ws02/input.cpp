#include <iostream>
#include "input.h"  // input.h başlık dosyasını dahil ediyoruz

// Kullanıcıdan tam sayı alır ve yanlış girişlerde tekrar ister
int getInt() {
    int value;
    while (!(std::cin >> value)) {  // Kullanıcıdan giriş al ve kontrol et
        std::cin.clear();  // Hatalı girişten sonra akışı temizle
        std::cin.ignore(1000, '\n');  // 1000 karaktere kadar olan tamponu temizle
        std::cout << "Bad integer entry, please try again:\n";// Kullanıcıya hatalı giriş olduğunu bildir
        std::cout << "> ";
    }
    return value;  // Doğru giriş olduğunda değeri döndür
}

// Kullanıcıdan verilen aralıkta bir tam sayı alır
int getInt(int min, int max) {
    int value;
    do {
        value = getInt();  // Kullanıcıdan tam sayı al
        if (value < min || value > max) {
            std::cout << "Invalid value, [" << min << "<ENTRY<" << max << "]\n";
            std::cout << "> ";// Hatalı aralık bildirimi
        }
    } while (value < min || value > max);  // Değer doğru aralıkta olana kadar döngü devam eder
    return value;  // Doğru aralıkta bir değer olduğunda döndür
}

// Referans parametresiyle bir tam sayı alır ve belirli aralıkta olup olmadığını kontrol eder
bool getInt(int& ref, int min, int max) {
    ref = getInt();  // Kullanıcıdan tam sayı al ve referans değişkene ata
    if (ref >= min && ref <= max) {
        return true;  // Eğer değer aralık içindeyse true döndür
    }
    return false;  // Aralık dışında ise false döndür
}
