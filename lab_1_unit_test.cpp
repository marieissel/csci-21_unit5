/*

* Name        : lab_15_unit_test.cpp

* Author      : Luke Sathrum

* Description : Unit test to test Lab #15 Functionality

*/

#define CATCH_CONFIG_MAIN

#include "catch.hpp"

 

#include "sorting.h"

bool GRADER = false;

 

TEST_CASE("Bubble Sort") {

  int main[5] = { 10, 20, 30, 40, 50 };

  int test[5] = { 50, 40, 30, 20, 10 };

  int passes = -1;

 

  SECTION("BubbleSort({50, 40, 30, 20, 10})") {

    passes = BubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

 

  SECTION("BubbleSort({10, 20, 30, 40, 50})") {

    test[0] = 10, test[1] = 20, test[2] = 30, test[3] = 40, test[4] = 50;

    passes = BubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

 

  SECTION("BubbleSort({10, 30, 20, 50, 40})") {

    test[0] = 10, test[1] = 30, test[2] = 20, test[3] = 50, test[4] = 40;

    passes = BubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

 

  SECTION("BubbleSort({50, 30, 10, 30, 50})") {

    main[0] = 10, main[1] = 30, main[2] = 30, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 30, test[2] = 10, test[3] = 30, test[4] = 50;

    passes = BubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

 

  SECTION("BubbleSort({50, 50, 50, 50, 50})") {

    main[0] = 50, main[1] = 50, main[2] = 50, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 50, test[2] = 50, test[3] = 50, test[4] = 50;

    passes = BubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

}

 

TEST_CASE("Optimized Bubble Sort") {

  int main[5] = { 10, 20, 30, 40, 50 };

  int test[5] = { 50, 40, 30, 20, 10 };

  int passes = -1;

 

  SECTION("OptimizedBubbleSort({50, 40, 30, 20, 10})") {

    passes = OptimizedBubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 4);

  }

 

  SECTION("OptimizedBubbleSort({10, 20, 30, 40, 50})") {

    test[0] = 10, test[1] = 20, test[2] = 30, test[3] = 40, test[4] = 50;

    passes = OptimizedBubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 1);

  }

 

  SECTION("OptimizedBubbleSort({10, 30, 20, 50, 40})") {

    test[0] = 10, test[1] = 30, test[2] = 20, test[3] = 50, test[4] = 40;

    passes = OptimizedBubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

  SECTION("OptimizedBubbleSort({50, 30, 10, 30, 50})") {

    main[0] = 10, main[1] = 30, main[2] = 30, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 30, test[2] = 10, test[3] = 30, test[4] = 50;

    passes = OptimizedBubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 3);

  }

 

  SECTION("OptimizedBubbleSort({50, 50, 50, 50, 50})") {

    main[0] = 50, main[1] = 50, main[2] = 50, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 50, test[2] = 50, test[3] = 50, test[4] = 50;

    passes = OptimizedBubbleSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 1);

  }

}

 

TEST_CASE("Selection Sort") {

  int main[5] = { 10, 20, 30, 40, 50 };

  int test[5] = { 50, 40, 30, 20, 10 };

  int passes = -1;

 

  SECTION("SelectionSort({50, 40, 30, 20, 10})") {

    passes = SelectionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("SelectionSort({10, 20, 30, 40, 50})") {

    test[0] = 10, test[1] = 20, test[2] = 30, test[3] = 40, test[4] = 50;

    passes = SelectionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("SelectionSort({10, 30, 20, 50, 40})") {

    test[0] = 10, test[1] = 30, test[2] = 20, test[3] = 50, test[4] = 40;

    passes = SelectionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("SelectionSort({50, 30, 10, 30, 50})") {

    main[0] = 10, main[1] = 30, main[2] = 30, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 30, test[2] = 10, test[3] = 30, test[4] = 50;

    passes = SelectionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("SelectionSort({50, 50, 50, 50, 50})") {

    main[0] = 50, main[1] = 50, main[2] = 50, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 50, test[2] = 50, test[3] = 50, test[4] = 50;

    passes = SelectionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

}

 

TEST_CASE("Algorithmic Test (For correct SWAPS, etc.)") {

  int main[5] = { 9, 1, 5, 2, 7 };

  GRADER = true;

  SECTION("BubbleSort({9, 1, 5, 2, 7})") {

    std::streambuf* old_cout = cout.rdbuf();

    std::ostringstream your_swaps;

    cout.rdbuf(your_swaps.rdbuf());

    BubbleSort(main, 5);

    cout.rdbuf(old_cout);

    CHECK(your_swaps.str() == "9 1\n9 5\n9 2\n9 7\n5 2\n");

  }

 

  SECTION("SelectionSort({9, 1, 5, 2, 7})") {

    std::streambuf* old_cout = cout.rdbuf();

    std::ostringstream your_swaps;

    cout.rdbuf(your_swaps.rdbuf());

    SelectionSort(main, 5);

    cout.rdbuf(old_cout);

    CHECK(your_swaps.str() == "9 1\n9 2\n9 7\n");

  }

}

 

TEST_CASE("Insertion Sort") {

  int main[5] = { 10, 20, 30, 40, 50 };

  int test[5] = { 50, 40, 30, 20, 10 };

  int passes = -1;

 

  SECTION("InsertionSort({50, 40, 30, 20, 10})") {

    passes = InsertionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("InsertionSort({10, 20, 30, 40, 50})") {

    test[0] = 10, test[1] = 20, test[2] = 30, test[3] = 40, test[4] = 50;

    passes = InsertionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("InsertionSort({10, 30, 20, 50, 40})") {

    test[0] = 10, test[1] = 30, test[2] = 20, test[3] = 50, test[4] = 40;

    passes = InsertionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("InsertionSort({50, 30, 10, 30, 50})") {

    main[0] = 10, main[1] = 30, main[2] = 30, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 30, test[2] = 10, test[3] = 30, test[4] = 50;

    passes = InsertionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

 

  SECTION("InsertionSort({50, 50, 50, 50, 50})") {

    main[0] = 50, main[1] = 50, main[2] = 50, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 50, test[2] = 50, test[3] = 50, test[4] = 50;

    passes = InsertionSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 5);

  }

}

 

TEST_CASE("Shell Sort") {

  int main[5] = { 10, 20, 30, 40, 50 };

  int test[5] = { 50, 40, 30, 20, 10 };

  int passes = -1;

 

  SECTION("ShellSort({50, 40, 30, 20, 10})") {

    passes = ShellSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

  SECTION("ShellSort({10, 20, 30, 40, 50})") {

    test[0] = 10, test[1] = 20, test[2] = 30, test[3] = 40, test[4] = 50;

    passes = ShellSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

  SECTION("ShellSort({10, 30, 20, 50, 40})") {

    test[0] = 10, test[1] = 30, test[2] = 20, test[3] = 50, test[4] = 40;

    passes = ShellSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

  SECTION("ShellSort({50, 30, 10, 30, 50})") {

    main[0] = 10, main[1] = 30, main[2] = 30, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 30, test[2] = 10, test[3] = 30, test[4] = 50;

    passes = ShellSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

  SECTION("ShellSort({50, 50, 50, 50, 50})") {

    main[0] = 50, main[1] = 50, main[2] = 50, main[3] = 50, main[4] = 50;

    test[0] = 50, test[1] = 50, test[2] = 50, test[3] = 50, test[4] = 50;

    passes = ShellSort(test, 5);

    CHECK(CompareArrays(main, test, 5));

    CHECK(passes == 2);

  }

 

}

 

void DisplayArray(int values[]) {

  if (GRADER) {

    for (unsigned int i = 0; i < 5; i++)

      cout << values[i] << ' ';

    cout << endl;

  }

}