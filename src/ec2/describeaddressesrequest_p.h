// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESREQUEST_P_H
#define QTAWS_DESCRIBEADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "describeaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesRequest;

class DescribeAddressesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeAddressesRequestPrivate(const Ec2Request::Action action,
                                   DescribeAddressesRequest * const q);
    DescribeAddressesRequestPrivate(const DescribeAddressesRequestPrivate &other,
                                   DescribeAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
