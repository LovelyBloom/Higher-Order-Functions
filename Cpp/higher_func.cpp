#include <iostream>

auto twice = [](const auto& f)
{
	return[&f](int x) {
		return f(f(x));
	};
};

auto plus_three = [](int i)
{
	return i + 3;
};

int main()
{
	auto g = twice(plus_three);
	std::cout << g(7) << std::endl;
}