// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEPROFILEREQUEST_P_H
#define QTAWS_DELETEDEVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletedeviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteDeviceProfileRequest;

class DeleteDeviceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteDeviceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteDeviceProfileRequest * const q);
    DeleteDeviceProfileRequestPrivate(const DeleteDeviceProfileRequestPrivate &other,
                                   DeleteDeviceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
