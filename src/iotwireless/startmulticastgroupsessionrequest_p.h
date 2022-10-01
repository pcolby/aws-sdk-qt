// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTICASTGROUPSESSIONREQUEST_P_H
#define QTAWS_STARTMULTICASTGROUPSESSIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "startmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartMulticastGroupSessionRequest;

class StartMulticastGroupSessionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    StartMulticastGroupSessionRequestPrivate(const IoTWirelessRequest::Action action,
                                   StartMulticastGroupSessionRequest * const q);
    StartMulticastGroupSessionRequestPrivate(const StartMulticastGroupSessionRequestPrivate &other,
                                   StartMulticastGroupSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMulticastGroupSessionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
