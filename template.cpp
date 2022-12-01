/**
 * Extend this template - BEST OF LUCK TO ME! 😁
*/

#include <bits/stdc++.h>

using namespace std;

void solution_1() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		while ( input_stream ) {

			// Take input here.
			string line;
			getline( input_stream, line );
			cout << line << endl;

		}

	} else {

		cout << "Input file not present!" << endl;

	}

	cout << "Solution here!" << endl;

	auto stop = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

	cout << "Total time consumed for solution 1 - " << duration.count() << " microseconds" << endl;
}

void solution_2() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		while ( input_stream ) {

			// Take input here.
			string line;
			getline( input_stream, line );
			cout << line << endl;

		}

	} else {

		cout << "Input file not present!" << endl;

	}

	cout << "Solution here!" << endl;

	auto stop = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

	cout << "Total time consumed for solution 2 - " << duration.count() << " microseconds" << endl;
}

int main() {

	solution_1();

	solution_2();

	return 0;
}
