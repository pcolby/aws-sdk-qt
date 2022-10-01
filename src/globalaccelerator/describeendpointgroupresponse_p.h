// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTGROUPRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeEndpointGroupResponse;

class DescribeEndpointGroupResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DescribeEndpointGroupResponsePrivate(DescribeEndpointGroupResponse * const q);

    void parseDescribeEndpointGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointGroupResponse)
    Q_DISABLE_COPY(DescribeEndpointGroupResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
