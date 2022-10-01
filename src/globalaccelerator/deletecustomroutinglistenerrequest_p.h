// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGLISTENERREQUEST_P_H
#define QTAWS_DELETECUSTOMROUTINGLISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deletecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingListenerRequest;

class DeleteCustomRoutingListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteCustomRoutingListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteCustomRoutingListenerRequest * const q);
    DeleteCustomRoutingListenerRequestPrivate(const DeleteCustomRoutingListenerRequestPrivate &other,
                                   DeleteCustomRoutingListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
