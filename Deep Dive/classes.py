class Rectangle:
    def __init__(self,width,height):
        self.width=width
        self.height=height
    def area(self):
        return self.width*self.height
    def per(self):
        return 2*(self.height+self.width)
r1 = Rectangle(10,20)
print(r1.per())