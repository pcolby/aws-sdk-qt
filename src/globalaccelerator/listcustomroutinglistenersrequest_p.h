// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGLISTENERSREQUEST_P_H
#define QTAWS_LISTCUSTOMROUTINGLISTENERSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listcustomroutinglistenersrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingListenersRequest;

class ListCustomRoutingListenersRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListCustomRoutingListenersRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListCustomRoutingListenersRequest * const q);
    ListCustomRoutingListenersRequestPrivate(const ListCustomRoutingListenersRequestPrivate &other,
                                   ListCustomRoutingListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingListenersRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
