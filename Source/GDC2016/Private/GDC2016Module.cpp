// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"


#define LOCTEXT_NAMESPACE "FConfiguratorRemoteModule"


/**
 * Implements the GDC2016 module.
 */
class FGDC2016Module
	: public IModuleInterface
{
public:

	//~ IModuleInterface interface

	virtual void StartupModule() override { }
	virtual void ShutdownModule() override { }

	virtual bool SupportsDynamicReloading() override
	{
		return true;
	}
};


IMPLEMENT_MODULE(FGDC2016Module, GDC2016);

#undef LOCTEXT_NAMESPACE
