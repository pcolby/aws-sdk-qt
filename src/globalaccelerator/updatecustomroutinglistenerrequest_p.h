// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGLISTENERREQUEST_P_H
#define QTAWS_UPDATECUSTOMROUTINGLISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "updatecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingListenerRequest;

class UpdateCustomRoutingListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    UpdateCustomRoutingListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   UpdateCustomRoutingListenerRequest * const q);
    UpdateCustomRoutingListenerRequestPrivate(const UpdateCustomRoutingListenerRequestPrivate &other,
                                   UpdateCustomRoutingListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
