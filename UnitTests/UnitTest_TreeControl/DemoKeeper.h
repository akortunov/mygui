/*!
	@file
	@author     George Evmenov
	@date       08/2009
*/
#ifndef DEMO_KEEPER_H_
#define DEMO_KEEPER_H_

#include "Base/BaseDemoManager.h"

namespace demo
{

	class DemoKeeper :
		public base::BaseDemoManager
	{
	public:
		void createScene() override;
		void destroyScene() override;

	private:
		void setupResources() override;
	};

} // namespace demo

#endif // DEMO_KEEPER_H_
