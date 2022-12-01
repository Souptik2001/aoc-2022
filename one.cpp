/**
 * Extend this template - BEST OF LUCK TO ME! 😁
*/

#include <bits/stdc++.h>

using namespace std;

void solution_1() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		int sum = 0;
		int max_val = 0;

		while ( input_stream ) {

			// Take input here.
			string line;
			getline( input_stream, line );

			if ( line == "" ) {
				max_val = max( max_val, sum );
				sum = 0;
			} else {
				sum += stoi( line );
			}

		}

		cout << max_val << endl;

	} else {

		cout << "Input file not present!" << endl;

	}

	auto stop = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

	cout << "Total time consumed for solution 1 - " << duration.count() << " microseconds" << endl;

}

void solution_2() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		int sum = 0;
		int a = 0;
		int b = 0;
		int c = 0;

		while ( input_stream ) {

			// Take input here.
			string line;
			getline( input_stream, line );

			if ( line == "" ) {

				if ( sum > a ) {
					c = b;
					b = a;
					a = sum;
				} else if ( sum > b ) {
					c = b;
					b = sum;
				} else if ( sum > c ) {
					c = sum;
				}

				sum = 0;

			} else {
				sum += stoi( line );
			}

		}

		cout << a + b + c << endl;

	} else {

		cout << "Input file not present!" << endl;

	}

	auto stop = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

	cout << "Total time consumed for solution 2 - " << duration.count() << " microseconds" << endl;

}

int main() {

	solution_1();

	solution_2();

	return 0;
}