#include <iostream>
#include <random>

int main()
{
    const int sample_size = 10000;
    int circle_counter = 0, square_counter = 0;
    double x = 0, y = 0;
    std::random_device dev1;
    std::default_random_engine eng1(dev1());
    std::uniform_real_distribution<double> distrib(-1, 1);


    for (int i = 0; i < sample_size; i++)
    {
        x = distrib(eng1);
        y = distrib(eng1);

        if (x * x + y * y <= 1)
        {
            circle_counter++;
        }
        square_counter++;
    }
    std::cout << "Pi wynosi: " << 4 * ((double)circle_counter / (double)square_counter);
    return 0;
}

