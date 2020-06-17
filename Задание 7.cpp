// Задание 7. Соболев А.А. КББО-02-19
// Person
#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include <string>
#include <sstream>
class person {
public:
human(std::string last_name, std::string name, std::string second_name)
{
this->last_name = last_name;
this->name = name;
this->second_name = second_name;
}
std::string get_full_name()
{
std::ostringstream full_name;
full_name << this->last_name << " "
<< this->name << " "
<< this->second_name;
return full_name.str();
}
private:
std::string name;
std::string last_name;
std::string second_name;
};



#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "person"
#include <string>
#include <vector>
class student : public person {
public:
student( std::string last_name, std::string name, std::string second_name, std::vector<int> scores, std::vector number):
human(
last_name,
name,
second_name,
number
) {
this->scores = scores;
}

float get_average_score()
{
float average_score;
for (unsigned int i = 0; i < count_scores; ++i) {
sum_scores += this->scores[i];
}
average_score = (float) sum_scores / (float) count_scores;
return average_score;
}
private:
};



#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED
#include "person"
#include <string>
class teacher : public person {
public:
worker(
std::string last_name,
std::string name,
std::string second_name,
unsigned int work_time
) : human(
last_name,
name,
second_name
) {
this->work_time = work_time;
}

unsigned int get_work_time()
{
return this->work_time;
}
private:

unsigned int work_time;
};
