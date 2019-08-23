#pragma once
#include <thread>
#include <mutex>

using std::mutex;

template <class T>
class SharedPtr
{
public:
	SharedPtr(T* ptr = nullptr)
		: _ptr(ptr)
		, _pRefCount(new int(1))
		, _pMutex(new mutex)
	{}
	~SharedPtr()
	{
		Release();
	}

	SharedPtr(const SharedPtr<T>& sp)
		: _ptr(sp._ptr)
		, _pRefCount(sp._pRefCount)
		, _pMutex(sp._pMutex)
	{
		AddRefConut();
	}

	void AddRefConut()
	{
		//��������ʹ�ü�1��ԭ�Ӳ���
		_pMutex->lock();
		(*_pRefCount);
		_pMutex->unlock();
	}
	//sp1 = sp2
	SharedPtr<T>& operator=(const SharedPtr<T>& sp)
	{
		//if(this != &sp)
		if (_ptr != sp._ptr)
		{
			//�ͷŹ���ľ���Դ
			Release();
			
			//�����������Դ�Ķ���,���������ü���
			_ptr = sp._ptr;
			_pRefCount = sp._pRefCount;
			_pMutex = sp._pMutex;

			AddRefConut();
		}
		return *this;
	}

	T& operator*() { return *_ptr; }
	T* operator->() { return _ptr; }
	int UseCount() { return *_pRefCount; }
	T* Get() { return _ptr; }
private:
	void Release()
	{
		bool deleteflag = false;
		//���ü�����һ.�����ֵ0 �ͷ���Դ
		_pMutex->lock();

		if ((*_pRefCount == 0))
		{
			delete _ptr;
			delete _pRefCount;
			deleteflag = true;
		}
		_pMutex->unlock();

		if (deleteflag == true)
		{
			delete _pMutex;
		}
	}
private:
	mutex *_pMutex; //������
	int *_pRefCount; //���ü���
	T* _ptr;//ָ�������Դ��ָ��

};

