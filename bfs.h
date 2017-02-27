#ifndef BFS_H
#define BFS_H
#include "gl_const.h"
#include "isearch.h"
#include "astar.h"

class BFS : public Astar
{
protected:
    virtual void addOpen(Node newNode);
    public:
        BFS();
        ~BFS(void);

};

#endif