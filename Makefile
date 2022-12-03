all:
	echo "Please specify the file"

one: clean one.cpp
	g++ -pthread -o out one.cpp && ./out

two: clean two.cpp
	g++ -pthread -o out two.cpp && ./out

three: clean three.cpp
	g++ -pthread -o out three.cpp && ./out

clean:
	rm -rf *o out