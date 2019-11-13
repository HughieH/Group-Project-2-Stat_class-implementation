# Group-Project-2-Stat_class-implementation
In this group project you will customize a suitable linear data structure you  learned in linear structures lesson into specialized data structure dedicated to represent highly duplicated numeric data. your specialized data structure will offer Θ ( 1 )time access to some simple and vital statistics. 

General instructions:

- [x] Pick a group leader and mention his name to your instructor 
- [ ] Create github project and on board all the members
- [ ] Create a good communication channel
- [ ] Create a check list of to do items
- [ ] Sit down as a group and discuss strategies and architecture the project
- [ ] Draw your UML digram, both your Simple_stat class UML and entire class interaction UML: you will earn a significant amount of credit for this
- [ ] Ask for help and offer help: speak out if you need help

# Tips from Indika

This problem presents what normally happens in industry; you have a more general set of solutions available and use them to solve a more special and complicated problem specific to your own need. If you recall, in our HW3 Daily weather problem solved a conceptually similar problem scenario; used more general set of tools to solve this specific problem. There we used available tools like OOP concepts and standard C++ containers and algorithms. So from outside you will only see the requirement laid out in the problem has been fulfilled; means all those general things you used are internal.  So essentially this is one more level of abstraction on top of the general tools you use. When you do this you can no longer use your solution to solve general problem; it will only solve this specific problem.

Yes you have to pic a suitable linear data structure from what we learned in the class as the principle storage unit in your solution. In this regard you have to use the code base we encountered in the class. This rule is strictly enforced. However, to support the requirement in the problem you are free to use other tools provided in the standard C++ libraries except math. For example if you are having to create this data object from input vector {8, 7,  9, 7, 11, 7, 8, 8, 10, 9, 7, 9, 9, 8, 9, 9, 7, 9, 10, 10}, you will only store 7, 8, 9, 10, 11 along with corresponding numbers of repetition. For example I will store 7 along with its repetition 5 together, 8 along with its repetition 4 together,  9 along with its repetition 6 together, 10 along with its repetition 3 together and 11 along with its repetition 1 together. 


