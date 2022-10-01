// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDDATATOMULTICASTGROUPREQUEST_P_H
#define QTAWS_SENDDATATOMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "senddatatomulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class SendDataToMulticastGroupRequest;

class SendDataToMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    SendDataToMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   SendDataToMulticastGroupRequest * const q);
    SendDataToMulticastGroupRequestPrivate(const SendDataToMulticastGroupRequestPrivate &other,
                                   SendDataToMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendDataToMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
