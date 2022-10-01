// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSREQUEST_P_H
#define QTAWS_LISTMULTICASTGROUPSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listmulticastgroupsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsRequest;

class ListMulticastGroupsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListMulticastGroupsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListMulticastGroupsRequest * const q);
    ListMulticastGroupsRequestPrivate(const ListMulticastGroupsRequestPrivate &other,
                                   ListMulticastGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMulticastGroupsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
