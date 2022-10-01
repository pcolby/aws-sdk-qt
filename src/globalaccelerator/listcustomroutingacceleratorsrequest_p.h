// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGACCELERATORSREQUEST_P_H
#define QTAWS_LISTCUSTOMROUTINGACCELERATORSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listcustomroutingacceleratorsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingAcceleratorsRequest;

class ListCustomRoutingAcceleratorsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListCustomRoutingAcceleratorsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListCustomRoutingAcceleratorsRequest * const q);
    ListCustomRoutingAcceleratorsRequestPrivate(const ListCustomRoutingAcceleratorsRequestPrivate &other,
                                   ListCustomRoutingAcceleratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingAcceleratorsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
