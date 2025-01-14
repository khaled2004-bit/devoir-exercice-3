#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Call {
    int callID;
    char status;
    struct Call* next;
    struct Call* prev;
} Call;


Call* createCall(int callID, const char* status) {
    Call* newCall = (Call*)malloc(sizeof(Call));
    newCall->callID = callID;
    newCall->next = NULL;
    newCall->prev = NULL;
    return newCall;
}

void addCall(Call** head, int callID, const char* status) {
    Call* newCall = createCall(callID, status);

    if (*head == NULL) {
        *head = newCall;
    } else {
        Call* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newCall;
        newCall->prev = temp;
    }
}

int main()
{

printf("test");
printf("test2");
    return 0;
}
