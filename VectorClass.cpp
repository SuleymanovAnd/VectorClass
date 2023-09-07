// VectorClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector.h"

int main()
{
    
    Vector MyVector(1.5, 3,2.5);
    Vector MyVector2(3, 2, 1.5);
    Vector MyVector3;

    MyVector.Show();
    MyVector2.Show();
    MyVector3.Show();
    std::cout << std::endl;
    std::cout << "Length of a MyVector = " << MyVector.Length() << std::endl;
    std::cout << "MyVector \"x\" + MyVector2 \"x\" = " << MyVector.GetX() + MyVector2.GetX() << std::endl;
    std::cout << std::endl;

    std::cout <<"Sum (MyVector + MyVector2) in Vector" << std::endl;
    MyVector.Set(MyVector.GetX() + MyVector2.GetX(), MyVector.GetY() + MyVector2.GetY(), MyVector.GetZ() + MyVector2.GetZ());
    MyVector.Show();
    std::cout << "Length of a Vector  = " << MyVector.Length() << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
