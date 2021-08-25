#include <iostream>
#include <cmath>
/* 1) Создать класс Power, который содержит два вещественных числа. Этот класс должен иметь две
переменные-члена для хранения этих вещественных чисел. Еще создать два метода: один с именем set,
который позволит присваивать значения переменным, второй — calculate, который будет выводить результат 
возведения первого числа в степень второго числа. Задать значения этих двух чисел по умолчанию.
*/
class Power {
private:
    int number1 = 0;
    int number2 = 0;


public:
    void set1(const int& number1s, const int& number2s) {
        number1 = number1s;
        number2 = number2s;
    }
    int calculate() {
        return pow(number1, number2);
    }
    void PrintCalculate() {
        std::cout << calculate();
        std::cout << std::endl;
    }
};

/*2) Написать класс с именем RGBA, который содержит 4 переменные - члена типа std::uint8_t: m_red, m_green,
m_blue и m_alpha(#include cstdint для доступа к этому типу).Задать 0 в качестве значения по умолчанию для m_red,
m_green, m_blue и 255 для m_alpha.Создать конструктор со списком инициализации членов, который позволит пользователю
передавать значения для m_red, m_blue, m_green и m_alpha.Написать функцию print(), которая будет выводить значения переменных - членов.
*/
void Task2() {
	class RGBA {
	private:
		uint8_t m_red{ 0 };
		uint8_t m_green{ 0 };
		uint8_t m_blue{ 0 };
		uint8_t m_alpha{ 255 };
	public:
        RGBA() {}
        RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
        {}
    void print(int m_red, int m_green, int m_blue, int m_alpha) {
        std::cout << "RGBA: " << m_red << ", " << m_green << ", " << m_blue << ", " << m_alpha;
		std::cout << std::endl;

    }
	};
    RGBA rgba;
    rgba.print(0,0,0,255);

}

/*3)Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
private-массив целых чисел длиной 10;
private целочисленное значение для отслеживания длины стека;
public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
public-метод с именем push(), который будет добавлять значение в стек. push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
public-метод с именем pop() для вытягивания и возврата значения из стека. Если в стеке нет значений, то должно выводиться предупреждение;
public-метод с именем print(), который будет выводить все значения стека.

Код main():
int main()
{
Stack stack;
stack.reset();
stack.print();

stack.push(3);
stack.push(7);
stack.push(5);
stack.print();

stack.pop();
stack.print();

stack.pop();
stack.pop();
stack.print();

return 0;
}

Этот код должен выводить:
( )
( 3 7 5 )
( 3 7 )
( )
*/

    class Stack {
    private:
        static const int size = 10;
        int arr[size]{};
        int sizestack = 0;
   
	public:
		void reset() {
			for (int i = 0; i < size; i++) {
				arr[i] = 0;
			}
		}
		bool push(int x) {
			if (size == sizestack) {
				return false;
			}
			arr[sizestack++] = x;
		}
			int pop() {
				if (sizestack == 0) {
					std::cout << "WARNING!!!" << std::endl;
				}
				return arr[sizestack--];
			}
			void print() {
				
				std::cout << "( ";
				
				for (int i = 0; i < sizestack; i++) {
					std::cout << arr[i] << " ";
					
				}
				std::cout << " )" << "\n";

			}
	};
	int main()
	{
		Power power;
		power.set1(2, 2);
		power.calculate();
		power.PrintCalculate();
		Task2();

		Stack stack;
		stack.reset();
		stack.print();

		stack.push(3);
		stack.push(7);
		stack.push(5);
		stack.print();

		stack.pop();
		stack.print();

		stack.pop();
		stack.pop();
		stack.print();

		return 0;
	}




