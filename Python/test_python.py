import datetime

loop_count = 10000000000
total = 0
start_time = datetime.datetime.now()
for i in range(loop_count):
    total = total + i
end_time = datetime.datetime.now()
diff = end_time - start_time
total_milliseconds = (int)(diff.total_seconds() * 1000)
if __debug__:
    configuration = 'DEBUG'
else:
    configuration = 'RELEASE'
print(f'Python   {configuration} loop count:{loop_count},total:{total},duration:{total_milliseconds}ms')