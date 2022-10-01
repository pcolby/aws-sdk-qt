// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H
#define QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingEndpointGroupResponse;

class CreateCustomRoutingEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit CreateCustomRoutingEndpointGroupResponsePrivate(CreateCustomRoutingEndpointGroupResponse * const q);

    void parseCreateCustomRoutingEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(CreateCustomRoutingEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
