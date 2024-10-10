# Using Monte Carlo Simulation to Evaluate Pi

The code in `src/main.cpp` implements a very simple Monte Carlo simulation to estimate the value of Pi.
For more information about the math behind this application, see [this link](https://www.geeksforgeeks.org/estimating-value-pi-using-monte-carlo/).

Use OpenMP to parallelize this code.

## Hint

This isn't a hard problem, but doing it right is not quite as easy as it might seem at first.
Think very carefully about how your random number generation is working.
You should try running with a small value for `npoints` (perhaps `10` or fewer) and print out the random numbers you get out of the calls to `dist(mt)`.
If everything is correct, each random number should be unique.

Remember that you can break a `#pragma omp parallel for` into:

```
#pragma omp parallel
  {
#pragma omp for(...) {
      ...
    }
  }
```