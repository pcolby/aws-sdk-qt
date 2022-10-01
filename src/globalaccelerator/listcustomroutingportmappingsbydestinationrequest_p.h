// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_P_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listcustomroutingportmappingsbydestinationrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsByDestinationRequest;

class ListCustomRoutingPortMappingsByDestinationRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListCustomRoutingPortMappingsByDestinationRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListCustomRoutingPortMappingsByDestinationRequest * const q);
    ListCustomRoutingPortMappingsByDestinationRequestPrivate(const ListCustomRoutingPortMappingsByDestinationRequestPrivate &other,
                                   ListCustomRoutingPortMappingsByDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingPortMappingsByDestinationRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
