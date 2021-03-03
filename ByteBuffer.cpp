void __fastcall ByteBuffer::WriteShortNeg(INT16 Short)
{
  UINT64 off1; // r9
  UINT64 off2; // r8

  off1 = CurrentOffset;
  CurrentOffset = off1 + 1;
  Buffer[off1] = Short + -128;
  off2 = CurrentOffset;
  CurrentOffset = off2 + 1;
  Buffer[off2] = HIBYTE(Short);
}
