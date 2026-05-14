#ifndef DMA_H
#define DMA_H

namespace seneca {

    // Contact yapısının tanımı
    struct Contact {
        char firstName[30];
        char lastName[30];
        char phoneNumber[15];
    };

    void reverse();
    Contact* getContact();
    void setEmpty(Contact&);
    void deallocate(Contact*);
    void display(const Contact&);

}

#endif // DMA_H
