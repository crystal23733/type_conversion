#include <iostream>
#include <string>
using namespace std;

class Item {
  public:
    Item() {};
    explicit Item(int num): num(num) {};
    explicit Item(string name): name(name) {};
    explicit Item(int num, string name): num(num), name(name) {};

    explicit operator int() const {
      cout << "Item::operator int()" << endl;
      return num;
    }

    explicit operator string() const {
      cout << "Item::operator string()" << endl;
      return name;
    }

  private:
    int num;
    string name;
};

/**
 * 주석은 명시적 형 변환 코드
 */
int main() {
  // Item i1 = 1; 묵시적 형변환
  Item i2(2); // 생성자 호출
  Item i3 = (Item)3; // 3을 명시적으로 형 변환
  // Item i4 = {2, "Dirt"}; // 묵시적 형변환
  Item i5(2, "Dirt");
}