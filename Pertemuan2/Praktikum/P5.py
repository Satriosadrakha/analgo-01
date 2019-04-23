import time

start = time. time()

x = 2356789

for i in range(2,x):
	if x/i == round(x/i):
		print("Non-Prima");
		print("i = " + str(i));
		print(str(x) + " / " + str(i) + " = " + str(x/i));
		break;

end = time. time()
print(end - start)

