customer.out: customer.cpp prepaid.cpp postpaid.cpp customer_test.cpp
	g++ customer.cpp prepaid.cpp postpaid.cpp customer_test.cpp -lgtest -lgtest_main -lpthread -o customer.out

test:
	./customer.out