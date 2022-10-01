// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTSERVICESRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTSERVICESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointServicesResponse;

class DescribeVpcEndpointServicesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointServicesResponsePrivate(DescribeVpcEndpointServicesResponse * const q);

    void parseDescribeVpcEndpointServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointServicesResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointServicesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
