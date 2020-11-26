/*!
	@file
	@author		Albert Semenov
	@date		07/2012
*/

#ifndef _b326e060_1d2c_4f1f_89cc_79cc0b385452_
#define _b326e060_1d2c_4f1f_89cc_79cc0b385452_

#include "ActionChangeDataProperty.h"
#include "Data.h"

namespace tools
{

	class ChangeSkinSizeAction :
		public ActionChangeDataProperty
	{
	public:
		void doAction() override;
		void undoAction() override;
		bool doMerge(Action* _action) override;

	private:
		typedef std::pair<PropertyPtr, std::string> PairProprty;
		typedef std::vector<PairProprty> VectorPairProperty;
		void storeRegionValues(DataPtr _skinData, VectorPairProperty& _store);

		void storeOldValues();
		void setNewValues();

	private:
		VectorPairProperty mOldValues;
	};

}

#endif
