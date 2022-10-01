// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPREQUEST_P_H
#define QTAWS_GETMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupRequest;

class GetMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetMulticastGroupRequest * const q);
    GetMulticastGroupRequestPrivate(const GetMulticastGroupRequestPrivate &other,
                                   GetMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
