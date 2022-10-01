// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingEndpointGroupResponse;

class DescribeCustomRoutingEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeCustomRoutingEndpointGroupResponsePrivate(DescribeCustomRoutingEndpointGroupResponse * const q);

    void parseDescribeCustomRoutingEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
