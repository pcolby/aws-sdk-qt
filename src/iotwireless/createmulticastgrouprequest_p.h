// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTICASTGROUPREQUEST_P_H
#define QTAWS_CREATEMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateMulticastGroupRequest;

class CreateMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateMulticastGroupRequest * const q);
    CreateMulticastGroupRequestPrivate(const CreateMulticastGroupRequestPrivate &other,
                                   CreateMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
