x=[1,2,3,4,5,6,7,8,9,10]
y=8

i=1
found=False

while i<=len(x) and not found:
	if x[i-1]==y:
		found=True
	else:
		i = i+1

if found:
	idx=i
else:
	idx=0

print(idx)
