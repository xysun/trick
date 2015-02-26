/*
 @file
 $Id: MemoryManager_strdup.cpp 541 2010-02-02 21:21:17Z penn $
 */
#include "sim_services/MemoryManager/include/MemoryManager.hh"

/**
 @par Detailed Description:
 */
char* Trick::MemoryManager::mm_strdup( const char* s) {
    char *allocation;
    int extent;

    /** @par Design: */
    /** @li Allocate sufficient space for the duplicate character string. */
    extent = (int)strlen(s)+1; 

    /** @li Allocate the duplicate character string */
    allocation = (char*)declare_var(TRICK_CHARACTER, "", 0, "", 1, &extent);

    /** @li Copy the contents of the original character string to the duplicate. */
    /** @li Return the address of the new allocation.*/
    return( strcpy(allocation, s));
}