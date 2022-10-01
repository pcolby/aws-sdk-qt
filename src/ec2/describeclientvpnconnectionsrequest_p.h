// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNCONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBECLIENTVPNCONNECTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describeclientvpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnConnectionsRequest;

class DescribeClientVpnConnectionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClientVpnConnectionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeClientVpnConnectionsRequest * const q);
    DescribeClientVpnConnectionsRequestPrivate(const DescribeClientVpnConnectionsRequestPrivate &other,
                                   DescribeClientVpnConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
