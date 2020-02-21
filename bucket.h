#ifndef GL_L4_BUCKET_H
#define GL_L4_BUCKET_H

#include <list>

class bucket{
public:
    bucket();
    ~bucket();

private:
    void input();
    void sort();
    void count();
    void output();

    int collision;
    const static int subNumber = 100;
    std::list<float> subBucket[subNumber];
};

#endif //GL_L4_BUCKET_H