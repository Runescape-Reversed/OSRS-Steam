class ByteBuffer
{
private:
  CHAR Padding000[0x10];

public:
  PCHAR Buffer;
  UINT64 CurrentOffset;
  
public:
  VOID WriteShortNeg(INT16 Short);
}
