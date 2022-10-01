// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPROFILEREQUEST_P_H
#define QTAWS_GETDEVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getdeviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDeviceProfileRequest;

class GetDeviceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetDeviceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetDeviceProfileRequest * const q);
    GetDeviceProfileRequestPrivate(const GetDeviceProfileRequestPrivate &other,
                                   GetDeviceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
