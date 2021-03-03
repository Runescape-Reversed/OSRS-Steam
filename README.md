# OSRS-Steam 
A solo project to reverse engineer critical parts of the OSRS Steam client. The OSRS steam client is a real native port of the OSRS client, using directx.
Unlike the NXT client for RS3, structure is mostly unchanged here. Anyone experienced with the engine and native assembly will have an easier time working 
with this than the old client. Overall it's a pleasent surprise, and I suspect a complete reverse engineering attempt back to C++ would be easy if someone 
cared enough.

## Protocol Obfuscation
The networking protocol obfuscation is still 100% in place. However, extraction of networking information is greatly simplified on x86 with the use of tools
such as VTIL. This may enable the use for automatic encoding/decoding of packets in the future. 

```
void __fastcall WriteShortNeg(BYTE_BUFFER *Buffer, INT16 Short)
{
  UINT64 off1; // r9
  UINT64 off2; // r8

  off1 = Buffer->CurrentOffset;
  Buffer->CurrentOffset = off1 + 1;
  Buffer->Buffer[off1] = Short + -128;
  off2 = Buffer->CurrentOffset;
  Buffer->CurrentOffset = off2 + 1;
  Buffer->Buffer[off2] = HIBYTE(Short);
}
```

It is recommended that Jagex __forceinline these functions in the future to prevent rampant packet bots. 

## Strings
Strings are created at runtime, I assume to handle multiple languages, but who knows.

```
CreateStringRef(&ExamineString, (__int64)"Examine", (__int64)"");
```

The engine is pretty simple, so the x-refs to `ExamineString` for instance lead us directly to `DoAction`.

```
AddMenuOption(v8, (__int64)&ExamineString, (__int64)&v165, 1002i64, *v171, v22, v24, 0);
```

By searching for immediate value `1002`, and going to the only cmp, we are directly inside DoAction. This is because DoAction uses a magic identifier to decide
which action is actually being executed. `1002` is a some-what weird value, so very few results show up.
