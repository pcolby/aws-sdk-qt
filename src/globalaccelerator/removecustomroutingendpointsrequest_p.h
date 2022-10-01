// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECUSTOMROUTINGENDPOINTSREQUEST_P_H
#define QTAWS_REMOVECUSTOMROUTINGENDPOINTSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "removecustomroutingendpointsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class RemoveCustomRoutingEndpointsRequest;

class RemoveCustomRoutingEndpointsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    RemoveCustomRoutingEndpointsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   RemoveCustomRoutingEndpointsRequest * const q);
    RemoveCustomRoutingEndpointsRequestPrivate(const RemoveCustomRoutingEndpointsRequestPrivate &other,
                                   RemoveCustomRoutingEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveCustomRoutingEndpointsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
