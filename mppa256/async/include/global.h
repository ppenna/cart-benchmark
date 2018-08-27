/*
 * Copyright(C) 2014 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * <global.h> - Global variables.
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

/* Kernel Includes */
#include <arch.h>

/* C And MPPA Library Includes*/
#include <stddef.h>
#include <stdint.h>
#include <mppa_async.h>

//	Be verbose?
extern int verbose;

//	Number of clusters to be used.
extern int nclusters;

// Cluster rank.
extern int rank;

/* Timing statistics. */
extern uint64_t master;
extern uint64_t slave[NUM_CLUSTERS];
extern uint64_t communication;
extern float total;
extern size_t data_sent;
extern size_t data_received;
extern unsigned nsend;
extern unsigned nreceive;

#endif /* GLOBAL_H_ */
