



#include <string>


class DiskManager{
 public:
  DiskManager();
  ~DiskManager() = default;
  bool OpenFile(char *filename);
  bool CloseFile();
  void ReadPage(int page_id);
  void WritePage(int frame_id, int frm);
  void Seek(int offset, int pos);
  void GetFile();
  void IncNumPages();
  void GetNumPages();
  void SetUse(int page_id, int use_bit);
  void GetUse(int page_id);

 private:
};
