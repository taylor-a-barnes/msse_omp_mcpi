#include<iostream>
#include<random>

int main(int argc, char *argv[]) {
  std::mt19937 mt = std::mt19937(1);
  std::uniform_real_distribution<double> dist(0.0, 1.0);

  long npoints = 100000000;

  long points_in_circle = 0;
  for (int ipoint=0; ipoint < npoints; ipoint++) {
    double x = dist(mt);
    double y = dist(mt);

    // Square of distance between (x, y) and the origin
    double r2 =  (x * x) + (y * y);

    if ( r2 <= 1.0 ) points_in_circle++;
  }

  // Value of pi
  double pi = ( 4.0 * points_in_circle ) / npoints;

  std::cout << "Estimated value of pi: " << pi << std::endl;
}
