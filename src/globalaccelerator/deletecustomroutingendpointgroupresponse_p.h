// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H
#define QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingEndpointGroupResponse;

class DeleteCustomRoutingEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeleteCustomRoutingEndpointGroupResponsePrivate(DeleteCustomRoutingEndpointGroupResponse * const q);

    void parseDeleteCustomRoutingEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
