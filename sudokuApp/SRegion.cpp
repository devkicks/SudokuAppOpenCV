#include "SRegion.h"


SRegion::SRegion(void)
{
	m_region.resize(9);
	for(int i = 0; i < m_region.size(); i++)
		m_region[i] = 0;

}

void SRegion::setValueAt(int index, int value)
{
	m_region[index] = value;
}



SRegion::~SRegion(void)
{
	m_region.clear();
}
