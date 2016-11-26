#include "namespace.h"

#include <mycalls.h>
#include <stdio.h>
#include <unistd.h>

int semcreate(int semid)
{
	message m;

	memset(&m, 0, sizeof(m));
	m.m_u32.data[0] = semid;

	return(_syscall(PM_PROC_NR, PM_SEMCREATE, &m));
}

int semdelete(int semid)
{
	message m;

	memset(&m, 0, sizeof(m));
	m.m_u32.data[0] = semid;

	return(_syscall(PM_PROC_NR, PM_SEMDELETE, &m));
}

int semdown(int semid)
{
	message m;

	memset(&m, 0, sizeof(m));
	m.m_u32.data[0] = semid;

	return(_syscall(PM_PROC_NR, PM_SEMDOWN, &m));
}

int semup(int semid)
{
	message m;

	memset(&m, 0, sizeof(m));
	m.m_u32.data[0] = semid;

	return(_syscall(PM_PROC_NR, PM_SEMUP, &m));
}
