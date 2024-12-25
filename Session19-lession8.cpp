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
    strcpy(sinhVienArray[1].name, "Pham Minh Phong");
    sinhVienArray[1].age = 21;
    strcpy(sinhVienArray[1].phoneNumber, "0912345679");

    sinhVienArray[2].id = 3;
    strcpy(sinhVienArray[2].name, "Nguyen Huy Sang");
    sinhVienArray[2].age = 22;
    strcpy(sinhVienArray[2].phoneNumber, "0912345680");

    sinhVienArray[3].id = 4;
    strcpy(sinhVienArray[3].name, "Nguyen Manh Hung");
    sinhVienArray[3].age = 23;
    strcpy(sinhVienArray[3].phoneNumber, "0912345681");

    sinhVienArray[4].id = 5;
    strcpy(sinhVienArray[4].name, "Pham Van Truong");
    sinhVienArray[4].age = 24;
    strcpy(sinhVienArray[4].phoneNumber, "0912345682");
}

void sapXepSinhVienTheoTen(struct SinhVien arr[], int length) {
    struct SinhVien temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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

    sapXepSinhVienTheoTen(sinhVienArray, currentLength);
    printf("Danh sách sinh viên sau khi s?p x?p:\n");
    inDanhSachSinhVien();

    return 0;
}


