import cppyy

cppyy.load_library("AwesomeLibrary.so")

cppyy.include("myclass.h")

class1 = cppyy.gbl.MyClass()
print(class1.toString())
print(f"Is magic class ? {class1.isMagic()}")

cppyy.include("classfactory.h")

class2 = cppyy.gbl.alessio.ClassFactory.createMyClass(35, "Alessio")
print(class2.toString())
print(f"Is magic class ? {class2.isMagic()}")

cppyy.include("nestingclass.h")

class3 = cppyy.gbl.alessio.utility.MyClass()
print(class3.toString())

class4 = cppyy.gbl.alessio.ClassFactory.createMyNestingClass(29, "Davide")
print(class4.toString())
