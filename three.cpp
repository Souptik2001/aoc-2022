/**
 * Extend this template - BEST OF LUCK TO ME! 😁
*/

#include <bits/stdc++.h>

using namespace std;

void solution_1() {

	auto start = chrono::high_resolution_clock::now();

	ifstream input_stream ("input.txt");

	if ( input_stream.is_open() ) {

		vector<int> repetitions;

		while ( input_stream ) {

			unordered_map<char, int> umap;

			// Take input here.
			string line;
			getline( input_stream, line );
			if ( line.length() == 0 ) continue;
			for ( int i = 0; i < line.length(); i++ ) {
				if ( i >= ( line.length() / 2 ) && umap.find(line[i]) != umap.end() ) {
					repetitions.push_back( line[i] );
					umap.erase( line[i] );
				}
				if ( i < ( line.length() / 2 ) ) {
					umap[line[i]] += 1;
				}
			}

		}

		int ans = 0;

		for ( char i : repetitions ) {
			if ( int( i ) < 97 ) {
				// Capital letter
				ans += ( i - 'A' ) + 27;
			} else {
				// Small letter
				ans += ( i - 'a' ) + 1;
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

		vector<int> repetitions;

		int ans = 0;

		unordered_map<char, int> umap_g;
		int count = 0;

		while ( input_stream ) {

			unordered_map<char, int> umap;

			// Take input here.
			string line;
			getline( input_stream, line );
			if ( line.length() == 0 ) continue;
			for ( int i = 0; i < line.length(); i++ ) {
				if ( umap.find(line[i]) == umap.end() ) {
					umap_g[line[i]] += 1;
					umap[line[i]] += 1;
				}
			}

			count++;

			if ( count == 3 || ! input_stream ) {
				for ( auto i : umap_g ) {
					if ( i.second == 3 ) {
						if ( int( i.first ) < 97 ) {
							// Capital letter
							ans += ( i.first - 'A' ) + 27;
						} else {
							// Small letter
							ans += ( i.first - 'a' ) + 1;
						}
					}
				}

				count = 0;
				umap_g.clear();
			}

		}

		cout << ans << endl;

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
