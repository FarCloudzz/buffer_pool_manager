
class BufferPoolManager {
 public:
  BufferPoolManager();
  ~BufferPoolManager();
  void FixPage(int page_id, int port);
  void FixNewPage();
  void UnFixPage(int page_id);
  void NumFreeFrames();
  void SelectVictim();
  void Hash(int page_id);
  void RemoveBcb();
  void RemoveLruEle(int frid);
  void SetDirty(int frame_id);
  void UnsetDirty(int frame_id);
  void WriteDirtys();
  void PrintFrame(int frame_id);
 private:
}