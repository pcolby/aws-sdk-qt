// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPROFILEREQUEST_P_H
#define QTAWS_CREATEDEVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createdeviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateDeviceProfileRequest;

class CreateDeviceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateDeviceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateDeviceProfileRequest * const q);
    CreateDeviceProfileRequestPrivate(const CreateDeviceProfileRequestPrivate &other,
                                   CreateDeviceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
