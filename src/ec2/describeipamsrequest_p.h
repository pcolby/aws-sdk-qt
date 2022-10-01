// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSREQUEST_P_H
#define QTAWS_DESCRIBEIPAMSREQUEST_P_H

#include "ec2request_p.h"
#include "describeipamsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamsRequest;

class DescribeIpamsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIpamsRequestPrivate(const Ec2Request::Action action,
                                   DescribeIpamsRequest * const q);
    DescribeIpamsRequestPrivate(const DescribeIpamsRequestPrivate &other,
                                   DescribeIpamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpamsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
