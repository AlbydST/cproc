struct hashtablekey {
	uint64_t hash;
	const char *str;
	size_t len;
};

void htabstrkey(struct hashtablekey *, const char *);
void htabbufkey(struct hashtablekey *, const char *, size_t);

struct hashtable *mkhtab(size_t);
void delhtab(struct hashtable *, void(void *));
void **htabput(struct hashtable *, struct hashtablekey *);
void *htabget(struct hashtable *, struct hashtablekey *);
