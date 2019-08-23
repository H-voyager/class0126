#include "ScanManger.h"

void ScanManger::Scan(const string& path)
{
	//�ȶ��ļ�ϵͳ�����ݿ�
	//�ļ�ϵͳ����
	vector<string> localdirs;
	vector<string> localfiles;
	DirectoryList(path, localdirs, localfiles);

	//dbset��localset�Ա�
	std::set<string> localset;
	localset.insert(localfiles.begin(), localfiles.end());
	localset.insert(localdirs.begin(), localdirs.end());

	//datamanger
	std::set<string> dbset;
	DataManager::GetInstance()->GetDocs(path, dbset);

	auto localit = localset.begin();
	auto dbit = dbset.cbegin();
	while (localit != localset.end() && dbit != dbset.end())
	{
		//���ݿ���û��,�����ļ�����,��������
		if (*localit < *dbit)
		{
			DataManager::GetInstance()->InsertDoc(path, *localit);
			++localit;
		}
		else if (*localit < *dbit)//����û��,���ݿ�����,ɾ������
		{
			DataManager::GetInstance()->DeleteDoc(path, *localit);
			++dbit;
		}
		else//�޸ı�
		{
			++dbit;
			++localit;
		}
	}

	while (localit != localset.end())
	{
		//��������
		DataManager::GetInstance()->InsertDoc(path, *localit);
		++localit;
	}
	while (dbit != dbset.end())
	{
		//ɾ������
		DataManager::GetInstance()->DeleteDoc(path, *localit);
		++dbit;
	}

	//�ݹ�ȶ���Ŀ¼
	for (const auto& subdirs : localdirs)
	{
		string subpath = path;
		subpath += '\\';
		subpath += subdirs;

		Scan(subdirs);
	}
}