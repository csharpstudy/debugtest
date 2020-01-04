// heap buffer overrun
//

#include <iostream>

int main()
{
	char* p = (char*)malloc(sizeof(char) * 10);

	// buffer overrun
	for (int i = 0; i < 20; i++)
	{
		*(p + i) = 'a';
	}

	std::cout << *(p + 15);

	free(p);
}
