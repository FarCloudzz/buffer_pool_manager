#include "buffer_pool_manager.h"

BufferPoolManager::BufferPoolManager(){}

/**
 * The prototype for this function is FixPage(Page_id, protection) and it returns a frame_id.
 */
void BufferPoolManager::FixPage(int page_id, int port){}

/**
 * The prototype for this function is FixNewPage() and it returns a page_id and a frame_id.
 */
void BufferPoolManager::FixNewPage(){}

/**
 * The prototype for this function is UnfixPage(page_id) and it returns a frame_id.
 */
void BufferPoolManager::UnFixPage(int page_id){}

/**
 * NumFreeFrames function looks at the buffer and returns the number of buffer pages
 * that are free and able to be used. 
 */
void BufferPoolManager::NumFreeFrames(){}

/**
 * SelectVictim function selects a frame to replace.
 */
void BufferPoolManager::SelectVictim(){}

/**
 * Hash function takes the page_id as the parameter and returns the frame id.
 */
void BufferPoolManager::Hash(int page_id){}

/**
 * RemoveBCB function removes the Buffer Control Block for the page_id from the array.
 */
void BufferPoolManager::RemoveBcb(){}

/**
 * RemoveLRUEle function removes the LRU element from the list.
 */
void BufferPoolManager::RemoveLruEle(int frid){}

/**
 * SetDirty function sets the dirty bit for the frame_id. 
 */
void BufferPoolManager::SetDirty(int frame_id){}

/**
 * UnsetDirty function assigns the dirty_bit for the corresponding frame_id to zero. 
 */
void BufferPoolManager::UnsetDirty(int frame_id){}

/**
 * WriteDirtys function must be called when the system is shut down.
 */
void BufferPoolManager::WriteDirtys(){}

/**
 * PrintFrame function prints out the contents of the frame described by the frame_id.
 */
void BufferPoolManager::PrintFrame(int frame_id){}