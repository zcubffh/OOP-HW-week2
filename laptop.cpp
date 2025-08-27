#include <iostream >
using namespace std;
class Laptop {
public:
    string brand;
    string model;
    string gpu;//Card do hoa
    int ram;//Dung luong RAM tinh bang GB
    int storage;//Dung luong o cung tinh bang GB
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    void checkGPU(string accordGPU){
        if (gpu == accordGPU) {
            cout << "This laptop's GPU is strong enough to play the game." << endl;
        } else {
            cout << "This laptop's GPU isn't strong enough to play the game." << endl;
        }
    }

    void upgradeRAM(int additionalRAM){
        ram += additionalRAM;
        cout << "RAM upgraded successfully. New RAM: " << ram << " GB" << endl;
    }
};

int main() {
    Laptop laptop1;
    laptop1.brand = "Dell";
    laptop1.model = "XPS 13";
    laptop1.ram = 16;
    laptop1.storage = 256;
    laptop1.gpu = "GTX 3050";
    laptop1.displayInfo();
    laptop1.checkRAM(16);//Kiem tra xem laptop co du Ram de chay phan mem 16GB
    laptop1.checkGPU("GTX 3050");//Kiem tra card do hoa co du manh khong
    laptop1.upgradeRAM(16);
    return 0;
}