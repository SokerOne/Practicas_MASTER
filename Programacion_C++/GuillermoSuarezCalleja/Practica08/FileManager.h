#pragma once

class FileManager
{
public:
	FileManager();
	~FileManager();

	void* mOpenFile(const char*, const char*);
	unsigned int mReadFile(void*, char*, char*&);
	const char* mWriteFile(void*, const char*, unsigned int);
	void mCloseFile(void*);
};