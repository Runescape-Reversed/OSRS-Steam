# OSRS-Steam 
A solo project to reverse engineer critical parts of the OSRS Steam client. The OSRS steam client is a real native port of the OSRS client, using directx.
Unlike the NXT client for RS3, structure is mostly unchanged here. Anyone experienced with the engine and native assembly will have an easier time working 
with this than the old client. Overall it's a pleasent surprise, and I suspect a complete reverse engineering attempt back to C++ would be easy if someone 
cared enough.

## Protocol Obfuscation
The networking protocol obfuscation is still 100% in place. However, extraction of networking information is greatly simplified on x86 with the use of tools
such as VTIL. This may enable the use for automatic encoding/decoding of packets in the future. 

```
PCHAR __fastcall WriteShortNeg(BYTE_BUFFER *Buffer, __int16 Short)
{
  __int64 off1; // r9
  UINT64 off2; // r8
  PCHAR result; // rax

  off1 = Buffer->CurrentOffset;
  Buffer->CurrentOffset = off1 + 1;
  Buffer->Buffer[off1] = Short + -128;
  off2 = Buffer->CurrentOffset;
  Buffer->CurrentOffset = off2 + 1;
  result = Buffer->Buffer;
  result[off2] = HIBYTE(Short);
  return result;
}
```

It is recommended that Jagex __forceinline these functions in the future to prevent rampant packet bots. 
