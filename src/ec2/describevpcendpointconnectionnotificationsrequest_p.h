/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPCENDPOINTCONNECTIONNOTIFICATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcendpointconnectionnotificationsrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeVpcEndpointConnectionNotificationsRequest;

class QTAWS_EXPORT DescribeVpcEndpointConnectionNotificationsRequestPrivate : public EC2RequestPrivate {

public:
    DescribeVpcEndpointConnectionNotificationsRequestPrivate(const EC2Request::Action action,
                                   DescribeVpcEndpointConnectionNotificationsRequest * const q);
    DescribeVpcEndpointConnectionNotificationsRequestPrivate(const DescribeVpcEndpointConnectionNotificationsRequestPrivate &other,
                                   DescribeVpcEndpointConnectionNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcEndpointConnectionNotificationsRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
