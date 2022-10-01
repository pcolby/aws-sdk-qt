// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLISTENERSREQUEST_P_H
#define QTAWS_LISTLISTENERSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listlistenersrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListListenersRequest;

class ListListenersRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListListenersRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListListenersRequest * const q);
    ListListenersRequestPrivate(const ListListenersRequestPrivate &other,
                                   ListListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListListenersRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
