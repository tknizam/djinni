// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from 
#pragma once

namespace Ringcentral {
	public ref class Bool sealed
	{
	public:
		property bool Value;
		Bool(bool value) { Value = value; }
	};
	public ref class Uinteger8 sealed
	{
	public:
		property unsigned char Value;
		Uinteger8(unsigned char value) { Value = value; }
	};
	public ref class Integer16 sealed
	{
	public:
		property short Value;
		Integer16(short value) { Value = value; }
	};
	public ref class Integer32 sealed
	{
	public:
		property int Value;
		Integer32(int value) { Value = value; }
	};
	public ref class Integer64 sealed
	{
	public:
		property long long Value;
		Integer64(long long value) { Value = value; }
	};
	public ref class Double sealed
	{
	public:
		property double Value;
		Double(double value) { Value = value; }
	};

	public ref class StringRef sealed
	{
	public:
		property Platform::String^ Value;
		StringRef(Platform::String^ value) { Value = value; }
	};
}