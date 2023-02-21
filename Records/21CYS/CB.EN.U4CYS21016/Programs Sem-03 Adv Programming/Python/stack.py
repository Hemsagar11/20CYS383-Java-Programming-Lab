class h_stack():
    
    def __init__(self,mxsize):
        self.data = list()
        self.maxSize = mxsize
        
    def push(self,value):
        if(len(self.data) >= self.maxSize):
            print ('Stack is Full')
        else:
            self.data.append(value)
            return 1
            
    def pop(self):
        if(len(self.data)!=0):
            print(self.data.pop())
        else:
            print ('Stack is empty')
            
    def top(self):
        if(len(self.data) == 0):
            print ('Stack is empty')
        else:
            print(self.data[-1])

    def isEmpty(self):
        if(len(self.data) == 0):
            print ('True')
        else:
            print('False')
            
    def size(self):
        print (len(self.data))
        
    def display(self):
        print(self.data)

s1=h_stack(5)
s1.push(11)
s1.push(1243)
s1.push(14134)
s1.push(874365)
s1.push(32765)
s1.display()

s1.top()
s1.push(1233)
s1.size()
s1.isEmpty()

s1.pop()
s1.display()
