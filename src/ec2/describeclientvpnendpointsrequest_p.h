// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBECLIENTVPNENDPOINTSREQUEST_P_H

#include "ec2request_p.h"
#include "describeclientvpnendpointsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnEndpointsRequest;

class DescribeClientVpnEndpointsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClientVpnEndpointsRequestPrivate(const Ec2Request::Action action,
                                   DescribeClientVpnEndpointsRequest * const q);
    DescribeClientVpnEndpointsRequestPrivate(const DescribeClientVpnEndpointsRequestPrivate &other,
                                   DescribeClientVpnEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
