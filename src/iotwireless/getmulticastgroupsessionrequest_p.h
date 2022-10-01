// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPSESSIONREQUEST_P_H
#define QTAWS_GETMULTICASTGROUPSESSIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupSessionRequest;

class GetMulticastGroupSessionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetMulticastGroupSessionRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetMulticastGroupSessionRequest * const q);
    GetMulticastGroupSessionRequestPrivate(const GetMulticastGroupSessionRequestPrivate &other,
                                   GetMulticastGroupSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMulticastGroupSessionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
