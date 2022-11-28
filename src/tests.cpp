#include "duration.h"

#include <stdio.h>

int main (void) {
    /* Test 1 */
    printf("--- TEST 1 ---\n");
    Duration* d1 = new Duration(); // Empty
    Duration* d2 = new Duration(10); // Test number
    Duration* d3 = new Duration(2147483647); // Interger boundary

    /* Test cases */
    (d1->getDuration() == 0) ? printf("PASSED\n") : printf("FAILED\n");
    (d2->getDuration() == 10) ? printf("PASSED\n") : printf("FAILED\n");
    (d3->getDuration() == 2147483647) ? printf("PASSED\n") : printf("FAILED\n");

    delete d1;
    delete d2;
    delete d3;

    /* Test 2 */
    printf("--- TEST 2 ---\n");
    Duration* d = new Duration();

    /* Test cases */
    d->getDuration() == 0 ? printf("PASSED\n") : printf("FAILED\n");
    d->tick();
    d->getDuration() == 1 ? printf("PASSED\n") : printf("FAILED\n");
    d->tick(3);
    d->getDuration() == 4 ? printf("PASSED\n") : printf("FAILED\n");

    delete d;

    /* Test 3 */
    printf("--- TEST 3 ---\n");
    d = new Duration();

    /* Test cases */
    d->setAlarm(2);
    d->tick() ? printf("FAILED\n") : printf("PASSED\n");
    d->tick() ? printf("PASSED\n") : printf("FAILED\n");
    d->tick() ? printf("FAILED\n") : printf("PASSED\n");

    delete d;

    /* Test 4 */
    printf("--- TEST 4 ---\n");
    d = new Duration(10);

    d->setAlarm(5);
    d->tick() ? printf("FAILED\n") : printf("PASSED\n");
    d->setAlarm(12);
    d->tick() ? printf("PASSED\n") : printf("FAILED\n");

    delete d;
}