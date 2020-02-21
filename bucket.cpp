#include "bucket.h"
#include <iostream>

bucket::bucket()
{
    input();
    sort();
    count();
    output();
}

// Input all data
void bucket::input()
{
    float newData;

    std::cin >>newData;
    while (newData!=0.0)
    {
        subBucket[(int)newData%100].push_back(newData);//<FIX % is cot correct
        std::cin >>newData;
    };
}

// Sort all subBacket, if not empty
void bucket::sort()
{
    for(int i = 0; i < subNumber;i++) {
        if (!subBucket[i].empty())
            subBucket[i].sort();
    }
}

// Looking for the greatest number of collisions
void bucket::count()
{
    collision = subBucket[0].size();
    for(int i = 1; i < subNumber; i++)
        if(collision < subBucket[i].size())
            collision = subBucket[i].size();
}

// Output all not empty subBucket and the highest number of collisions
void bucket::output()
{
    for(int i =0; i < subNumber; i++)
        for (std::list<float>::iterator start = subBucket[i].begin(); start != subBucket[i].end(); start++)
            std::cout << *start << ' ';

    std::cout << std::endl << collision;
}

// Clear all subBucket
bucket::~bucket()
{
    for (int i = 0; i < subNumber; i++) {
        if (!subBucket[i].empty())
            subBucket[i].erase(subBucket[i].begin(), subBucket[i].end());
    }
}