
#include "disk_manager.h"
DiskManager::DiskManager(){

}

/**
 * OpenFile function is called anytime a file needs to be opened for reading or writing.
 */
int DiskManager::OpenFile(std::string filename){
  return false;
}

/**
 * CloseFile function is called when the data file needs to be closed.
 */
int DiskManager::CloseFile(){}

/**
 * ReadPage function is called by the FixPage function in the buffer manager.
 */
void DiskManager::ReadPage(int page_id){}

/**
 * WritePage function is called whenever a page is taken out of the buffer.
 */
void DiskManager::WritePage(int frame_id, int frm){}

/**
 * Seek function moves the file pointer.
 */
void DiskManager::Seek(int offset, int pos){}

/**
 * GetFile function returns the current file.
 */
FILE *DiskManager::GetFile(){return currFile;}

/**
 * IncNumPages function increments the page counter.
 */
void DiskManager::IncNumPages(){numPages++;}

/**
 * GetNumPages function returns the page counter.
 */
int DiskManager::GetNumPages(){return numPages;}

/**
 * SetUse function looks sets the bit in the pages array.
 */
void DiskManager::SetUse(int page_id, int use_bit){}

/**
 * GetUse function returns the current use_bit for the corresponding page_id.
 */
int DiskManager::GetUse(int page_id){}


