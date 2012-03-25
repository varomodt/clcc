#include <stdlib.h>

#include "compiler.h"

extern tNvCliCompileProgram pNvCliCompileProgram;
extern tNvCliCompileLogFree pNvCliCompileLogFree;
extern tNvCliCompiledProgramFree pNvCliCompiledProgramFree;

int NvCliCompileProgram(const char **sourceStrings, unsigned int sourceStringsCount, const size_t *sourceStringsLengths, const char *compilerOptions, char **compileLogRet, char **compiledProgramRet)
{
    load_compiler();
    return pNvCliCompileProgram(sourceStrings, sourceStringsCount, sourceStringsLengths, compilerOptions, compileLogRet, compiledProgramRet);
}

void NvCliCompileLogFree(const char *compileLog)
{
    load_compiler();
    return pNvCliCompileLogFree(compileLog);
}

void NvCliCompiledProgramFree(const char *compiledProgram)
{
    load_compiler();
    return pNvCliCompiledProgramFree(compiledProgram);
}