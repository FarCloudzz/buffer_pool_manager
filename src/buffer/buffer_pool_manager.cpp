#include "buffer_pool_manager.h"

BufferPoolManager::BufferPoolManager(){}
void BufferPoolManager::FixPage(int page_id, int port){}
void BufferPoolManager::FixNewPage(){}
void BufferPoolManager::UnFixPage(int page_id){}
void BufferPoolManager::NumFreeFrames(){}
void BufferPoolManager::SelectVictim(){}
void BufferPoolManager::Hash(int page_id){}
void BufferPoolManager::RemoveBcb(){}
void BufferPoolManager::RemoveLruEle(int frid){}
void BufferPoolManager::SetDirty(int frame_id){}
void BufferPoolManager::UnsetDirty(int frame_id){}
void BufferPoolManager::WriteDirtys(){}
void BufferPoolManager::PrintFrame(int frame_id){}