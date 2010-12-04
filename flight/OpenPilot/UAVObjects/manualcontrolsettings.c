/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlSettings ManualControlSettings
 * @brief Settings to indicate how to decode receiver input by @ref ManualControlModule.
 *
 * Autogenerated files and functions for ManualControlSettings Object
 * @{ 
 *
 * @file       manualcontrolsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the ManualControlSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: manualcontrolsettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "openpilot.h"
#include "manualcontrolsettings.h"

// Private variables
static UAVObjHandle handle;

// Private functions
static void setDefaults(UAVObjHandle obj, uint16_t instId);

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure
 */
int32_t ManualControlSettingsInitialize()
{
	// Register object with the object manager
	handle = UAVObjRegister(MANUALCONTROLSETTINGS_OBJID, MANUALCONTROLSETTINGS_NAME, MANUALCONTROLSETTINGS_METANAME, 0,
			MANUALCONTROLSETTINGS_ISSINGLEINST, MANUALCONTROLSETTINGS_ISSETTINGS, MANUALCONTROLSETTINGS_NUMBYTES, &setDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
static void setDefaults(UAVObjHandle obj, uint16_t instId)
{
	ManualControlSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(ManualControlSettingsData));
	data.InputMode = 0;
	data.Roll = 0;
	data.Pitch = 1;
	data.Yaw = 2;
	data.Throttle = 3;
	data.FlightMode = 4;
	data.Accessory1 = 8;
	data.Accessory2 = 8;
	data.Accessory3 = 8;
	data.Pos1StabilizationSettings[0] = 2;
	data.Pos1StabilizationSettings[1] = 2;
	data.Pos1StabilizationSettings[2] = 2;
	data.Pos2StabilizationSettings[0] = 2;
	data.Pos2StabilizationSettings[1] = 2;
	data.Pos2StabilizationSettings[2] = 2;
	data.Pos3StabilizationSettings[0] = 2;
	data.Pos3StabilizationSettings[1] = 2;
	data.Pos3StabilizationSettings[2] = 2;
	data.Pos1FlightMode = 0;
	data.Pos2FlightMode = 1;
	data.Pos3FlightMode = 2;
	data.ChannelMax[0] = 2000;
	data.ChannelMax[1] = 2000;
	data.ChannelMax[2] = 2000;
	data.ChannelMax[3] = 2000;
	data.ChannelMax[4] = 2000;
	data.ChannelMax[5] = 2000;
	data.ChannelMax[6] = 2000;
	data.ChannelMax[7] = 2000;
	data.ChannelNeutral[0] = 1500;
	data.ChannelNeutral[1] = 1500;
	data.ChannelNeutral[2] = 1500;
	data.ChannelNeutral[3] = 1500;
	data.ChannelNeutral[4] = 1500;
	data.ChannelNeutral[5] = 1500;
	data.ChannelNeutral[6] = 1500;
	data.ChannelNeutral[7] = 1500;
	data.ChannelMin[0] = 1000;
	data.ChannelMin[1] = 1000;
	data.ChannelMin[2] = 1000;
	data.ChannelMin[3] = 1000;
	data.ChannelMin[4] = 1000;
	data.ChannelMin[5] = 1000;
	data.ChannelMin[6] = 1000;
	data.ChannelMin[7] = 1000;
	data.ArmedTimeout = 30000;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.access = ACCESS_READWRITE;
	metadata.gcsAccess = ACCESS_READWRITE;
	metadata.telemetryAcked = 1;
	metadata.telemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryAcked = 1;
	metadata.gcsTelemetryUpdateMode = UPDATEMODE_ONCHANGE;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdateMode = UPDATEMODE_NEVER;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle ManualControlSettingsHandle()
{
	return handle;
}

/**
 * @}
 */

