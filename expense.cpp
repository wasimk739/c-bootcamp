#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

    BREAKFAST
struct Expense {
    int type;
    int amount;
}

int calculateSum(struct Expense *expenses[], size_t numExpenses) {
    int sum=0;
    for (int i=0; i<numExpenses, i++) {
        if (expenses[i]->type ==1 || expenses[i->type==2]){
            sum=sum+expenses[i]->amount;

        }
    }
}