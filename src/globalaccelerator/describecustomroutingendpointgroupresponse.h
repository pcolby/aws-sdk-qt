// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSE_H
#define QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describecustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingEndpointGroupResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingEndpointGroupResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeCustomRoutingEndpointGroupResponse(const DescribeCustomRoutingEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomRoutingEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingEndpointGroupResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingEndpointGroupResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
