DIR = app

all:
	for dir in ${DIR}; do \
		${MAKE} -C $${dir} all; \
	done

clean:
	for dir in ${DIR}; do \
		${MAKE} -C $${dir} clean; \
	done

.PHONY: all clean
