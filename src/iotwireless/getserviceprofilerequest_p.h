// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEPROFILEREQUEST_P_H
#define QTAWS_GETSERVICEPROFILEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceProfileRequest;

class GetServiceProfileRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetServiceProfileRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetServiceProfileRequest * const q);
    GetServiceProfileRequestPrivate(const GetServiceProfileRequestPrivate &other,
                                   GetServiceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
