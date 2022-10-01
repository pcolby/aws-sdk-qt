// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTICASTGROUPREQUEST_P_H
#define QTAWS_UPDATEMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatemulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateMulticastGroupRequest;

class UpdateMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateMulticastGroupRequest * const q);
    UpdateMulticastGroupRequestPrivate(const UpdateMulticastGroupRequestPrivate &other,
                                   UpdateMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
