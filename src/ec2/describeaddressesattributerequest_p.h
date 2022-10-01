// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEADDRESSESATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describeaddressesattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesAttributeRequest;

class DescribeAddressesAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeAddressesAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeAddressesAttributeRequest * const q);
    DescribeAddressesAttributeRequestPrivate(const DescribeAddressesAttributeRequestPrivate &other,
                                   DescribeAddressesAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAddressesAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
