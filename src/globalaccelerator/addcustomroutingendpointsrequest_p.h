// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMROUTINGENDPOINTSREQUEST_P_H
#define QTAWS_ADDCUSTOMROUTINGENDPOINTSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "addcustomroutingendpointsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AddCustomRoutingEndpointsRequest;

class AddCustomRoutingEndpointsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    AddCustomRoutingEndpointsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   AddCustomRoutingEndpointsRequest * const q);
    AddCustomRoutingEndpointsRequestPrivate(const AddCustomRoutingEndpointsRequestPrivate &other,
                                   AddCustomRoutingEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddCustomRoutingEndpointsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
