



#include <string>


#define MAXPAGES 1024

/**
 * DiskManager takes care of the allocation and deallocation of pages within a database. It performs the reading and
 * writing of pages to and from disk, providing a logical file layer within the context of a database management system.
 */
class DiskManager{
 public:
  /**
   * Creates a new disk manager that writes to the specified database file.
   * @param db_file the file name of the database file to write to
   */
  DiskManager();
  ~DiskManager() = default;

  /**
   * OpenFile function is called anytime a file needs to be opened for reading or writing.
   * The prototype for this function is OpenFile(String filename) and returns an error code.
   * The function opens the file specified by the filename.
   */
  bool OpenFile(char *filename);

  /**
   * CloseFile function is called when the data file needs to be closed. The protoype is
   * CloseFile() and returns an error code. This function closes the file that is in current use.
   * This function should only be called as the database is changed or a the program closes.
   */
  bool CloseFile();

  /**
   * ReadPage function is called by the FixPage function in the buffer manager. This
   * prototype is ReadPage(page_id, bytes) and returns what it has read in. This function calls
   * fseek() and fread() to gain data from a file.
   */
  void ReadPage(int page_id);

  /**
   * WritePage function is called whenever a page is taken out of the buffer. The
   * prototype is WritePage(frame_id, frm) and returns how many bytes were written. This
   * function calls fseek() and fwrite() to save data into a file.
   */
  void WritePage(int frame_id, int frm);

  /**
   * Seek function moves the file pointer.
   */
  void Seek(int offset, int pos);

  /**
   * GetFile function returns the current file.
   */
  void GetFile();

  /**
   * IncNumPages function increments the page counter.
   */
  void IncNumPages();

  /**
   * GetNumPages function returns the page counter.
   */
  void GetNumPages();

  /**
   * SetUse function looks sets the bit in the pages array. This array keeps track of the
   * pages that are being used. If all records in a page are deleted, then that page is not really
   * used anymore and can be reused again in the database. In order to know if a page is
   * reusable, the array is checked for any use_bits that are set to zero. The fixNewPage
   * function firsts checks this array for a use_bit of zero. If one is found, the page is reused.
   * If not, a new page is allocated.
   */
  void SetUse(int page_id, int use_bit);

  /**
   * GetUse function returns the current use_bit for the corresponding page_id.
   */
  void GetUse(int page_id);

 private:
  FILE *currFile;
  int numPages;
  int pages[MAXPAGES];
};
