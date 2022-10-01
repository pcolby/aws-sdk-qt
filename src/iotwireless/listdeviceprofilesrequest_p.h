// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPROFILESREQUEST_P_H
#define QTAWS_LISTDEVICEPROFILESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listdeviceprofilesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDeviceProfilesRequest;

class ListDeviceProfilesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListDeviceProfilesRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListDeviceProfilesRequest * const q);
    ListDeviceProfilesRequestPrivate(const ListDeviceProfilesRequestPrivate &other,
                                   ListDeviceProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceProfilesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
