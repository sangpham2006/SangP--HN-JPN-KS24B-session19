#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

struct SinhVien sinhVienArray[5];
int currentLength = 5;

void khoiTaoSinhVien() {
    sinhVienArray[0].id = 1;
    strcpy(sinhVienArray[0].name, "Pham Dinh Sang");
    sinhVienArray[0].age = 20;
    strcpy(sinhVienArray[0].phoneNumber, "0912345678");

    sinhVienArray[1].id = 2;
    strcpy(sinhVienArray[1].name, "Pham Minh PHong");
    sinhVienArray[1].age = 21;
    strcpy(sinhVienArray[1].phoneNumber, "0912345679");

    sinhVienArray[2].id = 3;
    strcpy(sinhVienArray[2].name, "Pham van truong");
    sinhVienArray[2].age = 22;
    strcpy(sinhVienArray[2].phoneNumber, "0912345680");

    sinhVienArray[3].id = 4;
    strcpy(sinhVienArray[3].name, "Nguyen Huy Sang");
    sinhVienArray[3].age = 23;
    strcpy(sinhVienArray[3].phoneNumber, "0912345681");

    sinhVienArray[4].id = 5;
    strcpy(sinhVienArray[4].name, "Nguyen Manh Hung");
    sinhVienArray[4].age = 24;
    strcpy(sinhVienArray[4].phoneNumber, "0912345682");
}

void xoaSinhVien(int id) {
    int found = 0;

    for (int i = 0; i < currentLength; i++) {
        if (sinhVienArray[i].id == id) {
            found = 1;
            for (int j = i; j < currentLength - 1; j++) {
                sinhVienArray[j] = sinhVienArray[j + 1];
            }
            currentLength--;
            break;
        }
    }

    if (found) {
        printf("Sinh viên có ID %d dã du?c xóa.\n", id);
    } else {
        printf("Sinh viên có ID %d không t?n t?i.\n", id);
    }
}

void inDanhSachSinhVien() {
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               sinhVienArray[i].id, sinhVienArray[i].name, 
               sinhVienArray[i].age, sinhVienArray[i].phoneNumber);
    }
}

int main() {
    khoiTaoSinhVien();
    printf("Danh sách sinh viên ban d?u:\n");
    inDanhSachSinhVien();

    xoaSinhVien(3);

    printf("Danh sách sinh viên sau khi xóa:\n");
    inDanhSachSinhVien();

    return 0;
}


