// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMULTICASTGROUPSESSIONREQUEST_P_H
#define QTAWS_CANCELMULTICASTGROUPSESSIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "cancelmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class CancelMulticastGroupSessionRequest;

class CancelMulticastGroupSessionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CancelMulticastGroupSessionRequestPrivate(const IoTWirelessRequest::Action action,
                                   CancelMulticastGroupSessionRequest * const q);
    CancelMulticastGroupSessionRequestPrivate(const CancelMulticastGroupSessionRequestPrivate &other,
                                   CancelMulticastGroupSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelMulticastGroupSessionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
