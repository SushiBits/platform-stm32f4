MEMORY
{
	IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 512k
	CCM     (rw ) : ORIGIN = 0x10000000, LENGTH = 64k
	IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 320k
}

INCLUDE cortex-m4-ccm.ld
