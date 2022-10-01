// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSREQUEST_P_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listcustomroutingportmappingsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsRequest;

class ListCustomRoutingPortMappingsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListCustomRoutingPortMappingsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListCustomRoutingPortMappingsRequest * const q);
    ListCustomRoutingPortMappingsRequestPrivate(const ListCustomRoutingPortMappingsRequestPrivate &other,
                                   ListCustomRoutingPortMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingPortMappingsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
