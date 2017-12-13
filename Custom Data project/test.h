#pragma once

#include <cstdlib>

template<bool ex>
void assert(bool condition)
{
	if (condition == ex)
	{
		return;
	}

	abort();
}

template<typename T>
void assertEqual(T a, T b)
{
	if (a == b)
	{
		return;
	}

	abort();
}

template <typename T>
void assertNotEqual(T a, T b)
{
	if (a != b)
	{
		return;
	}

	abort();
}

template <typename T>
void assertGreaterThan(T a, T b)
{
	if (a > b)
	{
		return;
	}

	abort();
}

template <typename T>
void assertLessThan(T a, T b)
{
	if (a < b)
	{
		return;
	}

	abort();
}