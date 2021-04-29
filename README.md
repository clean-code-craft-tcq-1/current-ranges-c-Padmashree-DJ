# Test Driven Ranges

This exercise extends the [Battery Monitoring] use-case.

The charging current varies during the process of charging.
We need to capture the range of current measurements -
what range of currents are most often encountered while charging.

> **DO NOT** jump into implementation! Read the example and the starting task below.

## Example

### Input

Consider a set of periodic current samples from a charging session to be:
`3, 3, 5, 4, 10, 11, 12`

### Functionality

The continuous ranges in there are: `3,4,5` and `10,11,12`.

The task is to detect the ranges and
output the number of readings in each range.

In this example,

- the `3-5` range has `4` readings
- the `10-12` range has `3` readings.

### Output

The expected output would be:

```
Range, Readings
3-5, 4
10-12, 3
```

## Tasks

Start test-driven development:

1. Establish quality parameters for your project: What is the maximum complexity you would allow?4
2. How much duplication would you consider unacceptable? more than 0(no duplicates)
3. What is the coverage you'll aim for?100 %

Adapt/adopt/extend the `yml` files from one of your workflow folders.

Here the yml file is adopted to limit complexity of 4, and duplication check was not added as it was capturing even the catch.hpp(tried with exclude command) and code coverage was added. However as the run fails, coverage could not be executed. Any suggestion on how all can be performed?
 
4 Write the smallest possible failing test."Case for detecting number of continuous range in the reading array given:Failing"

5. Write the minimum amount of code that'll make it pass.

6. Write the next failing test."Case for detecting continuous range: Failing"

Implement one failing test and at least one passing test:

- 1. "Case for detecting number of continuous range in the reading array given" the name of a **passing** test
- 2. "Case for detecting continuous range: Failing" the name of a **failing** test
