#pragma once
#include "Common.h"
#include "DataManger.h"

//ScanManger��Ƴɵ���ģʽ,��������ֻ��һ��ɨ��ģ��
class ScanManger
{
public:
	//ScanManger()
	//{
	//	_datamgr.Init();
	//}
	void StartScan()
	{
		while (1)
		{
			Scan("D:\\KuGou\\Temp\\");
			std::this_thread::sleep_for(std::chrono::seconds(4));
		}
	}

	static ScanManger* CreateInstance()
	{
		static ScanManger scanmgr;
		static std::thread thd(&StartScan, &scanmgr);
		thd.detach();
		return &scanmgr;
	}
	void Scan(const string& path);

private:
	ScanManger()
	{
		//_datamgr.Init();
	}
	ScanManger(const ScanManger&);
	//DataManager _datamgr;
};

