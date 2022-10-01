// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTGROUPRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTGROUPRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describeendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeEndpointGroupResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeEndpointGroupResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeEndpointGroupResponse(const DescribeEndpointGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointGroupResponse)
    Q_DISABLE_COPY(DescribeEndpointGroupResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
