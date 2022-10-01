// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBEVPNCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnConnectionsRequest;

class DescribeVpnConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpnConnectionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpnConnectionsRequest * const q);
    DescribeVpnConnectionsRequestPrivate(const DescribeVpnConnectionsRequestPrivate &other,
                                   DescribeVpnConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpnConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
