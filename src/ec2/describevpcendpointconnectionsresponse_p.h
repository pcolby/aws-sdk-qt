// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionsResponse;

class DescribeVpcEndpointConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointConnectionsResponsePrivate(DescribeVpcEndpointConnectionsResponse * const q);

    void parseDescribeVpcEndpointConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
