// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNROUTESREQUEST_P_H
#define QTAWS_DESCRIBECLIENTVPNROUTESREQUEST_P_H

#include "ec2request_p.h"
#include "describeclientvpnroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnRoutesRequest;

class DescribeClientVpnRoutesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeClientVpnRoutesRequestPrivate(const Ec2Request::Action action,
                                   DescribeClientVpnRoutesRequest * const q);
    DescribeClientVpnRoutesRequestPrivate(const DescribeClientVpnRoutesRequestPrivate &other,
                                   DescribeClientVpnRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
