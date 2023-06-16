#include <iostream>
#include <vector>
#include <algorithm>

struct Job {
    int id;
    int duration;

    Job(int i, int d) : id(i), duration(d) {}
};

bool compareDuration(const Job& job1, const Job& job2) {
    return job1.duration > job2.duration;
}

void scheduleLJF(std::vector<Job>& jobs) {
    std::sort(jobs.begin(), jobs.end(), compareDuration);

    std::cout << "Job Order: ";
    for (size_t i = 0; i < jobs.size(); ++i) {
        std::cout << jobs[i].id << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<Job> jobs;
    jobs.push_back(Job(1, 10));
    jobs.push_back(Job(2, 5));
    jobs.push_back(Job(3, 8));
    jobs.push_back(Job(4, 3));
    jobs.push_back(Job(5, 6));

    scheduleLJF(jobs);

    return 0;
}
