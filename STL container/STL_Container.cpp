#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>

// STL Контейнеры
// 1. vector - вектор, массив
// 2. forward_list - однонаправленный список
// 3. list - двусвязный (двунаправленный) список
// 4. queue - очередь
// 5. stack - стек
// 6. map - мап
// 7. set - сет (набор объектов)
// 
// unordered_map - несортированный мап
// unordered_set - несортированный сет
// 
// 8. priority_queue - приоритетная очередь
// 9. multiset - мультисет
// 10. multimap - мультимап

// cppreference

int main()
{

	//int arr[] = { 123, 54 };
	std::vector<int> arr = {123, 54};
	std::vector<int> vec;

	arr.push_back(22);
	arr.push_back(32); // Добавление элемента в конец.
	arr.reserve(20); // Резервирование памяти.
	arr.shrink_to_fit(); // Ужать вместимость до size()

	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << '\n' << "===================\n";

	// std::vector<int>::iterator it; - итератор - объект в классе вектор (почти как указатель)
	// arr.begin() - итератор начала вектора
	// arr.end() - итератор конца вектора
	
	for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << '\n' << "===================\n";

	std::vector<int> abc(10, 3); // Метод объявления.(кол-во элементов, чем заполнить)

	for (size_t i = 0; i < abc.size(); i++)
	{
		std::cout << abc[i] << " ";
	}
	std::cout << '\n' << "===================\n";

	std::cout << "arr.size() --> " << arr.size() << std::endl; // размер
	std::cout << "arr.capacity() --> " << arr.capacity() << std::endl; // Вместимость
	
	std::cout << '\n' << "===================\n";
	std::cout << '\n' << "===================\n";
	std::cout << '\n' << "===================\n";

	std::vector<int> my_vector = { 42, 65, 77 };
	std::cout << "First el of vector (*my_vector.begin()) --> " << *my_vector.begin() << std::endl; // --> 42
	// std::cout << "last el of vector (*my_vector.end()) --> " << *my_vector.end() << std::endl; - compile error

	my_vector.emplace(my_vector.begin(), 33); // добавление элемента в указанное место.
	// my.vector.emplace(my_vector.begin() -- Указатель на первый элемент, чем заполнить)
	for (size_t i = 0; i < my_vector.size(); i++)
	{
		std::cout << my_vector[i] << " ";
	}
	std::cout << '\n' << "===================\n";

	my_vector.erase(my_vector.begin() + 1); // - удаление элемента (my_vector.erase( указатель на первый элемент ) 
	// Сложность по времени vector
	// random access (случайный доступ) O(1) - const time
	// вставка/удаление O(n), n == vector.size()
	
	for (size_t i = 0; i < my_vector.size(); i++)
	{
		std::cout << my_vector[i] << " ";
	}
	std::cout << '\n' << "===================\n";

	std::vector<std::vector<int>> vec2d(5, std::vector<int>(10, 0)); // инициализация двумерного вектора

	for (size_t i = 0; i < vec2d.size(); i++)
	{
		std::cout << "---------------------\n";
		for (size_t j = 0; j < vec2d[i].size(); j++)
		{
			std::cout << '|' << vec2d[i][j] << "|\b";
		}
		std::cout << std::endl;
	}
	std::cout << "---------------------\n";
	std::cout << "===================\n";
	std::cout << "===================\n";
	std::cout << "===================\n\n";

	// queue - очередь FIFO (first in first out)

	std::queue<int> q;

	q.push(5);
	q.push(3);
	q.push(1);
	std::cout << "q.front() --> " << q.front() << std::endl; // Выводит первый элемент очереди (q.front()) --> 5
	q.pop(); // - выкидывает первый элемент из очереди
	std::cout << "q.front() --> " << q.front() << std::endl; // --> 3
	q.push(4);
	q.push(8);
	q.push(55);

	// Вывод очереди на экран
	while (!q.empty())
	{
		std::cout << q.front() << ' ';
		q.pop();
	}
	std::cout << "\n===================\n";
	std::cout << "===================\n";
	std::cout << "===================\n\n";

	// stack - стек LIFO (last in first out)

	std::stack<std::string> my_stack;
	my_stack.push("hello");
	my_stack.push("how are you?");
	my_stack.push("goodbye");

	// Вывод стека на экран
	while (!my_stack.empty())
	{
		std::cout << my_stack.top() << ' ';
		my_stack.pop();
	}
	std::cout << "\n===================\n";
	std::cout << "===================\n";
	std::cout << "===================\n\n";

	// map - ассоциативный контейнер, который состоит из пар --> ключ/значение, при этом каждый ключ уникален!

	std::map<int, std::string> my_map;

	my_map.insert({ 1, "Vadim" }); // добавление элемента
	my_map.insert({ 2, "Gleb" });
	my_map.insert({ 3, "Bob" });
	my_map.insert({ 42, "Alex" });
	std::cout << "===================\n";

	std::cout << my_map[1] << std::endl;
	std::cout << my_map[42] << std::endl;



	return 0;
}