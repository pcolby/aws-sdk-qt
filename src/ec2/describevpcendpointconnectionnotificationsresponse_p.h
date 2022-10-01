// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionNotificationsResponse;

class DescribeVpcEndpointConnectionNotificationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcEndpointConnectionNotificationsResponsePrivate(DescribeVpcEndpointConnectionNotificationsResponse * const q);

    void parseDescribeVpcEndpointConnectionNotificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointConnectionNotificationsResponse)
    Q_DISABLE_COPY(DescribeVpcEndpointConnectionNotificationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
