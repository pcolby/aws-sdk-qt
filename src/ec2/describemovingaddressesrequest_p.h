// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOVINGADDRESSESREQUEST_P_H
#define QTAWS_DESCRIBEMOVINGADDRESSESREQUEST_P_H

#include "ec2request_p.h"
#include "describemovingaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeMovingAddressesRequest;

class DescribeMovingAddressesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeMovingAddressesRequestPrivate(const Ec2Request::Action action,
                                   DescribeMovingAddressesRequest * const q);
    DescribeMovingAddressesRequestPrivate(const DescribeMovingAddressesRequestPrivate &other,
                                   DescribeMovingAddressesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMovingAddressesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
