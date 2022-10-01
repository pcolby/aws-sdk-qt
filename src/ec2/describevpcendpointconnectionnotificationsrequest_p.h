// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointconnectionnotificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcEndpointConnectionNotificationsRequest;

class DescribeVpcEndpointConnectionNotificationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcEndpointConnectionNotificationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcEndpointConnectionNotificationsRequest * const q);
    DescribeVpcEndpointConnectionNotificationsRequestPrivate(const DescribeVpcEndpointConnectionNotificationsRequestPrivate &other,
                                   DescribeVpcEndpointConnectionNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointConnectionNotificationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
