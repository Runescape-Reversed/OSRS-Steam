#include "ByteBuffer.h"

VOID ByteBuffer::WriteShortNeg(
  _In_ INT16 Short
)
{
  UINT64 off1 = CurrentOffset;
  CurrentOffset = off1 + 1;
  Buffer[off1] = Short + -128;

  UINT64 off2 = CurrentOffset;
  CurrentOffset = off2 + 1;
  Buffer[off2] = HIBYTE(Short);
}
