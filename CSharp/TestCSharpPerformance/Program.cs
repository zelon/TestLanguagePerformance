const long kLoopCount = 10000000000; // meaningful count: 10000000000
long total = 0;
var startTime = DateTime.Now;
for (long i=0; i<kLoopCount; ++i)
{
    total += i;
}
var endTime = DateTime.Now;
var diff = endTime - startTime;
#if DEBUG
string configuration = "DEBUG";
#else
string configuration = "RELEASE";
#endif
Console.WriteLine($"C#   {configuration} loop count:{kLoopCount},total:{total},duration:{(int)diff.TotalMilliseconds}ms");