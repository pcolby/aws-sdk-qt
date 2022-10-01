// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSE_P_H
#define QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingEndpointGroupsResponse;

class ListCustomRoutingEndpointGroupsResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ListCustomRoutingEndpointGroupsResponsePrivate(ListCustomRoutingEndpointGroupsResponse * const q);

    void parseListCustomRoutingEndpointGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingEndpointGroupsResponse)
    Q_DISABLE_COPY(ListCustomRoutingEndpointGroupsResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
