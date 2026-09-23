all: a.out

a.out:
	g++ -std=c++11  test/test.cpp src/app.cpp -o a.out

test: a.out
	./a.out -s -d -t

clean:
	rm ./a.out