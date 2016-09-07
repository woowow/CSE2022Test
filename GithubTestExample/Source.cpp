#include <stdio.h>
#include <iostream>
#include <ostream>
#include <fstream>

//namespace
struct Vector2D
{
	int x = 1;
	int y = 2;

	void print()
	{
		printf("%d %d\n", x, y);
	}
};

std::ostream& operator << 
	(std::ostream& stream, Vector2D vector)
{
	stream << vector.x << " " << vector.y << std::endl;

	return stream;
}

void main()
{
	Vector2D vector;
/*
	FILE *of = fopen("text.txt", "w");

	fprintf(of, "%3.1f %d", vector.x, vector.y);

	fclose(of);

	std::cout << vector << std::endl;
*/
	std::ofstream of("cppstyle.txt");

	of << vector << std::endl;

	// branch commit test.
}