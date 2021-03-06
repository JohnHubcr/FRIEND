//
//  ProcExtender.h
//  Flexible Register/Instruction Extender aNd Documentation
//
//  Created by Alexander Hude on 11/11/2016.
//  Copyright © 2016 Fried Apple. All rights reserved.
//

#pragma once

#include <pro.h>

static const uint32_t kMaxElementNameLength	= 32;

class ProcExtender
{
public:
	virtual ~ProcExtender() {}
	
	virtual bool	init() = 0;
	virtual bool	close() = 0;

	virtual bool	isEnabled() = 0;
	virtual bool	setEnabled(bool enabled) = 0;

	virtual bool	output(ea_t address, uint32_t size) = 0;
	virtual bool	getSystemRegisterName(ea_t address, char* nameBuffer, uint32_t nameLength) = 0;
	
protected:
	bool			m_enabled = false;
	
};
