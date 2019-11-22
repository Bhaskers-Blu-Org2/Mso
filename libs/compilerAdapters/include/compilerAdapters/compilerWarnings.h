// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

/**
	This header contains cross-plat macros for suppressing compiler warnings
	
	Alphabetically add a [BEGIN|END]_DISABLE_WARNING_* pair of macros for the compiler warning.
	
	clang-only: use BEGIN_DISABLE_COMPILER_WARNING_CLANG with the -W argument
	msvc-only: use BEGIN_DISABLE_COMPILER_WARNING_MSVC with the warning number
	both: use BEGIN_DISABLE_COMPILER_WARNING with both values
	
	FUTURE: auto-generate this from shared file
*/
#ifndef LIBLET_COMPILERADAPTERS_COMPILERWARNINGS_H
#define LIBLET_COMPILERADAPTERS_COMPILERWARNINGS_H
#include <compilerAdapters/compilerWarnings_impl.h>

#define BEGIN_DISABLE_WARNING_EXCEPTIONS_PARAMETER() BEGIN_DISABLE_COMPILER_WARNING_ALL(4297, "-Wexceptions")
#define END_DISABLE_WARNING_EXCEPTIONS_PARAMETER() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_FREESTANDING_CONSTANT() BEGIN_DISABLE_COMPILER_WARNING_MSVC(25049)
#define END_DISABLE_WARNING_FREESTANDING_CONSTANT() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_HEADER_HYGIENE_VARIABLE() BEGIN_DISABLE_COMPILER_WARNING_CLANG("-Wheader-hygiene")
#define END_DISABLE_WARNING_HEADER_HYGIENE_VARIABLE() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_INCONSISTENT_MISSING_OVERRIDE() BEGIN_DISABLE_COMPILER_WARNING_CLANG("-Winconsistent-missing-override")
#define END_DISABLE_WARNING_INCONSISTENT_MISSING_OVERRIDE() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_UNUSED_CONST_VARIABLE() BEGIN_DISABLE_COMPILER_WARNING_CLANG("-Wunused-const-variable")
#define END_DISABLE_WARNING_UNUSED_CONST_VARIABLE() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_UNUSED_PARAMETER() BEGIN_DISABLE_COMPILER_WARNING_ALL(4100, "-Wunused-parameter")
#define END_DISABLE_WARNING_UNUSED_PARAMETER() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_UNUSED_VALUE() BEGIN_DISABLE_COMPILER_WARNING_CLANG("-Wunused-value")
#define END_DISABLE_WARNING_UNUSED_VALUE() END_DISABLE_COMPILER_WARNING()

#define BEGIN_DISABLE_WARNING_UNUSED_VARIABLE() BEGIN_DISABLE_COMPILER_WARNING_ALL(4189, "-Wunused-variable")
#define END_DISABLE_WARNING_UNUSED_VARIABLE() END_DISABLE_COMPILER_WARNING()

#endif // LIBLET_COMPILERADAPTERS_COMPILERWARNINGS_H
