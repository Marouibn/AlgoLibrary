#ifndef ALGO
#define ALGO

typedef struct object {
	int data;
} object;

bool Compare(object * p, object * q) {
	if (p->data > q->data) {
		return 1
	}

	return 0;
}

object * BinarySearch(object* ObjectArray, int len);

#endif
