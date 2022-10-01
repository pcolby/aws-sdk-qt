// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEATTRIBUTEREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "describeimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImageAttributeRequest;

class DescribeImageAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeImageAttributeRequestPrivate(const Ec2Request::Action action,
                                   DescribeImageAttributeRequest * const q);
    DescribeImageAttributeRequestPrivate(const DescribeImageAttributeRequestPrivate &other,
                                   DescribeImageAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
