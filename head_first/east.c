#include <stdio.h>

void go_south_east(int lat, int lon)
{
	lat -= 1; 
	lon += 1; 
}

int memory_pts()
{
	int x = 4; 
	printf("x lives at %p\n", &x); 
	int *address_of_x = &x; 
}

int main()
{
	int latitude = 32; 
	int longitude = -64;
	go_south_east(latitude, longitude); 
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return 0; 
}
