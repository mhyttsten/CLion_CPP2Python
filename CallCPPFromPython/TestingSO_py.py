from ctypes import cdll

a = cdll.LoadLibrary("./libSOCreate.so")
print 'hello we are here trying to load shared libraries!'
a.hello()
print "we are alldone here..."