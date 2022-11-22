#include "genome.h"
#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    genome myGenome; //creating object of class genome
   
    myGenome.allocate(3);

    myGenome.randomize();

    myGenome.set_mRate(0.6);

    myGenome.mutate();

    genome::Pixel* target = new genome::Pixel[3];

    target[0].red = 124;
    target[0].green = 25;
    target[0].blue = 0;

    target[1].red = 254;
    target[1].green = 56;
    target[1].blue = 186;

    target[2].red = 86;
    target[2].green = 128;
    target[2].blue = 189;

    double error_perc = myGenome.calculate_overall_fitness(target, 3);

    cout << round(error_perc * 100.0) / 100.0 << endl;

    return 0;
}

