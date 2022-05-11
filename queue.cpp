#include <iostream>
#include <queue>

using namespace std;
void show_queue(queue<string> names1) {
	while (!names1.empty())
	{
		cout << names1.front() << endl;
		names1.pop();
	}
}
int main()
{
	queue<string> names;
	names.push("Maria");
	names.push("Martina");
	names.push("Mixalis");
	names.push("Babis");
	names.push("Froksilan8i");
	show_queue(names);
	return 0;
}
