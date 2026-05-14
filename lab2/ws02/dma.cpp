#include <iostream>
#include "dma.h"

using namespace std;

namespace seneca {

    // Fonksiyon: reverse
    void reverse() {
        int size;
        std::cout << "Enter the number of double values:\n";
        std::cout << "> ";
        std::cin >> size;
        
        

        // Dinamik bellek ayırma
        double* arr = new double[size];

        // Kullanıcıdan değerleri alma
        for (int i = 0; i < size; i++) {
            std::cout << (i + 1) << "> ";
            std::cin >> arr[i];
        }

        // Ters sırada yazdırma
        for (int i = size - 1; i >= 0; i--) {
            std::cout << arr[i] << std::endl;
        }

        // Belleği serbest bırakma
        delete[] arr;
    }

    // Contact nesnesini boş hale getirme
    void setEmpty(Contact& c) {
        c.firstName[0] = '\0';  // İlk karakteri null terminator yaparak boş diziyi gösterir
        c.lastName[0] = '\0';   // Aynı şekilde soyadını da boş yapar
        c.phoneNumber[0] = '0'; // Telefon numarasını da boş hale getirir
        c.phoneNumber[1] = '\0';
    }

    // Fonksiyon: getContact
    Contact* getContact() {
        Contact* newContact = new Contact;

        std::cout << "Name: ";
        std::cin >> newContact->firstName;
        std::cout << "Last name: ";
        std::cin >> newContact->lastName;
        std::cout << "Phone number: ";
        std::cin >> newContact->phoneNumber;

        return newContact;
    }

    // Fonksiyon: display
  void display(const Contact& contact) {
      std::cout << contact.firstName << " " << contact.lastName << ", +" << contact.phoneNumber << "\n";  // İsim, soyisim ve telefon numarasını yazdır
  }
    // Fonksiyon: deallocate
    void deallocate(Contact* contact) {
        delete contact; // Belleği serbest bırak
    }

}
