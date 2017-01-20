t = int(raw_input())
for i in range(0,t):
	nText = ""
	text = raw_input()
	for r in range(0,len(text)/2,2):
		nText += text[r]
	print nText	
