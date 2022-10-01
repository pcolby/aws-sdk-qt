// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCPEERINGCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcPeeringConnectionsResponse;

class DescribeVpcPeeringConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcPeeringConnectionsResponsePrivate(DescribeVpcPeeringConnectionsResponse * const q);

    void parseDescribeVpcPeeringConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcPeeringConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpcPeeringConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
