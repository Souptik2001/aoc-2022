/**
 * Extend this template - BEST OF LUCK TO ME! 😁
*/

#include <bits/stdc++.h>

using namespace std;

void solution_1() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		int ans = 0;

		while ( input_stream ) {

			string line;
			getline( input_stream, line );

			istringstream ss(line);

			string op, you;

			ss >> op;
			ss >> you;

			if ( you == "X" ) {
				ans += 1;
				if ( op == "C" ) {
					ans += 6;
				} else if ( op == "A" ) {
					ans += 3;
				}
			} else if ( you == "Y" ) {
				ans += 2;
				if ( op == "A" ) {
					ans += 6;
				} else if ( op == "B" ) {
					ans += 3;
				}
			} else if ( you == "Z" ) {
				ans += 3;
				if ( op == "B" ) {
					ans += 6;
				} else if ( op == "C" ) {
					ans += 3;
				}
			}

		}

		cout << ans << endl;

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

		int ans = 0;

		while ( input_stream ) {

			string line;
			getline( input_stream, line );

			istringstream ss(line);

			string op, you;

			ss >> op;
			ss >> you;

			if ( you == "X" ) {
				ans += 0;
				if ( op == "A" ) {
					ans += 3;
				} else if ( op == "B" ) {
					ans += 1;
				} else if ( op == "C" ) {
					ans += 2;
				}
			} else if ( you == "Y" ) {
				ans += 3;
				if ( op == "A" ) {
					ans += 1;
				} else if ( op == "B" ) {
					ans += 2;
				} else if ( op == "C" ) {
					ans += 3;
				}
			} else if ( you == "Z" ) {
				ans += 6;
				if ( op == "A" ) {
					ans += 2;
				} else if ( op == "B" ) {
					ans += 3;
				} else if ( op == "C" ) {
					ans += 1;
				}
			}

		}

		cout << ans << endl;

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
