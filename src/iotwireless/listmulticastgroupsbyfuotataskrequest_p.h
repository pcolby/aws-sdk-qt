// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSBYFUOTATASKREQUEST_P_H
#define QTAWS_LISTMULTICASTGROUPSBYFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listmulticastgroupsbyfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsByFuotaTaskRequest;

class ListMulticastGroupsByFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListMulticastGroupsByFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListMulticastGroupsByFuotaTaskRequest * const q);
    ListMulticastGroupsByFuotaTaskRequestPrivate(const ListMulticastGroupsByFuotaTaskRequestPrivate &other,
                                   ListMulticastGroupsByFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMulticastGroupsByFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
