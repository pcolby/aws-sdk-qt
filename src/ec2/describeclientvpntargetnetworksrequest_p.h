// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSREQUEST_P_H
#define QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeclientvpntargetnetworksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnTargetNetworksRequest;

class DescribeClientVpnTargetNetworksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClientVpnTargetNetworksRequestPrivate(const Ec2Request::Action action,
                                   DescribeClientVpnTargetNetworksRequest * const q);
    DescribeClientVpnTargetNetworksRequestPrivate(const DescribeClientVpnTargetNetworksRequestPrivate &other,
                                   DescribeClientVpnTargetNetworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnTargetNetworksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
