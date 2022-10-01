// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICEPERMISSIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicePermissionsResponse;

class DescribeVpcEndpointServicePermissionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointServicePermissionsResponsePrivate(DescribeVpcEndpointServicePermissionsResponse * const q);

    void parseDescribeVpcEndpointServicePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServicePermissionsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServicePermissionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
