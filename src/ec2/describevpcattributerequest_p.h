// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEVPCATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcAttributeRequest;

class DescribeVpcAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcAttributeRequest * const q);
    DescribeVpcAttributeRequestPrivate(const DescribeVpcAttributeRequestPrivate &other,
                                   DescribeVpcAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
