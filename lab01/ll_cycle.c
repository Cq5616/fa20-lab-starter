#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortoise=head;
    node *hare=head;
    while(hare&&hare->next){
        tortoise=tortoise->next;
        hare=hare->next;
        hare=hare->next;
        if(tortoise==hare)
        return 1;
    }
    return 0;
}