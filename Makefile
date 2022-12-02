all:
	echo "Please specify the file"

one: clean one.cpp
	g++ -pthread -o out one.cpp && ./out

two: clean two.cpp
	g++ -pthread -o out two.cpp && ./out

clean:
	rm -rf *o out