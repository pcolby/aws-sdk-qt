// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGLISTENERREQUEST_P_H
#define QTAWS_CREATECUSTOMROUTINGLISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createcustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingListenerRequest;

class CreateCustomRoutingListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateCustomRoutingListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateCustomRoutingListenerRequest * const q);
    CreateCustomRoutingListenerRequestPrivate(const CreateCustomRoutingListenerRequestPrivate &other,
                                   CreateCustomRoutingListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
