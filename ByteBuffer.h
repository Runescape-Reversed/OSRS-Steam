#pragma once
#include <Windows.h>

#pragma pack(push, 1)
class ByteBuffer
{
private:
  CHAR Padding000[0x10];

public:
  PCHAR Buffer;
  UINT64 CurrentOffset;
  
public:
  //
  // Writes a short with one byte negated.
  //
  VOID WriteShortNeg(
    _In_ INT16 Short
  );
}
#pragma pack(pop)
