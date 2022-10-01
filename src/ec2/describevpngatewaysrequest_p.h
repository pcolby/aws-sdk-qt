// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNGATEWAYSREQUEST_P_H
#define QTAWS_DESCRIBEVPNGATEWAYSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpngatewaysrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnGatewaysRequest;

class DescribeVpnGatewaysRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpnGatewaysRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpnGatewaysRequest * const q);
    DescribeVpnGatewaysRequestPrivate(const DescribeVpnGatewaysRequestPrivate &other,
                                   DescribeVpnGatewaysRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpnGatewaysRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
