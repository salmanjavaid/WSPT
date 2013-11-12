#pragma once
class Test_1
{
private:
	enum AllocationState {
    UNALLOCATED = 0,
    SINGLE_OBJECT,
    ARRAY,
    SINGLE_OBJECT_WITH_ARRAY
  };

  AllocationState allocation_state_;

public:
  
	Test_1(void);
	~Test_1(void);
};

