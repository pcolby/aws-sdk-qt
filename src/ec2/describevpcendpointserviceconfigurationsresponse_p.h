// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICECONFIGURATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServiceConfigurationsResponse;

class DescribeVpcEndpointServiceConfigurationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointServiceConfigurationsResponsePrivate(DescribeVpcEndpointServiceConfigurationsResponse * const q);

    void parseDescribeVpcEndpointServiceConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServiceConfigurationsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServiceConfigurationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
