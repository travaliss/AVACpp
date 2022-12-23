#include <vector>
#include <iostream>

template<class T>
class CStructure {
public:
	virtual void push(T value) = 0;
	virtual T pop() = 0;
	virtual void type() = 0;
};

template<class T>
class Queue : public CStructure<T> {
private:
	std::vector<T> data;
public:
	void push(T value) override {
		data.insert(data.begin(), value);
	}
	T pop() override {
		T elem = data[data.size() - 1];
		data.pop_back();
		return elem;
	}
	void type() override {
		std::cout << "I am queue\n";
	}
};

template<class T>
class Stack : public CStructure<T> {
private:
	std::vector<T> data;
	void push(T value) override {
		data.insert(data.begin(), value);
	}
	T pop() override {
		T elem = data[0];
		data.erase(data.begin());
		return elem;
	}
	void type() override {
		std::cout << "I am stack\n";
	}
};

template<class T>
void foo(CStructure<T>& object, T first, T second, T third, T fourth) {
	object.push(first);
	object.push(second);
	object.push(third);
	object.push(fourth);
	for (int i = 0; i < 4; i++)
		std::cout << object.pop() << " ";
	std::cout << std::endl;
}

template<class T>
void getType(CStructure<T>& object) {
	object.type();
}

int main() {
	int a = 10, b = 20, c = 30, d = 40;
	Stack<int> stack;
	Queue<int> queue;
	foo(stack, a, b, c, d);
	getType(stack);
	foo(queue, a, b, c, d);
	getType(queue);
	return 0;
}