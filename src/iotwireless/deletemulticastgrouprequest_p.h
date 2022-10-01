// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTICASTGROUPREQUEST_P_H
#define QTAWS_DELETEMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletemulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteMulticastGroupRequest;

class DeleteMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteMulticastGroupRequest * const q);
    DeleteMulticastGroupRequestPrivate(const DeleteMulticastGroupRequestPrivate &other,
                                   DeleteMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
