x=[1,2,3,4,5,6,7,8,9,10]
y=8

i = 1

j = len(x)
found = False

while not found and (i-1)<j:
	mid = round(((i-1)+j)/2)
	if x[mid-1]==y:
		found = True
	else:
		if x[mid-1]<y:
			i = mid + 1
		else:
			j = mid - 1

if found:
	idx = mid
else:
	idx = 0

print(idx)