#include <iostream>
using namespace std;
int main()
{
	int* ptr = new int; // Динамічно виділяємо цілочисельну змінну.
	int* otherPtr = ptr; // otherPtr тепер вказує на ту ж саму виділену пам'ятьб що і ptr.
	delete ptr; // Повертаємо пам'ять назад в операційну системуб ptr i otherPtr тепер є висячим вказівником.
	ptr = 0; // ptr тепер уже nullptr.
	// Проте otherPtr як і раніше є висячим вказівником.
	return 0;
}