// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCSREQUEST_P_H
#define QTAWS_DESCRIBEVPCSREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcsRequest;

class DescribeVpcsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcsRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcsRequest * const q);
    DescribeVpcsRequestPrivate(const DescribeVpcsRequestPrivate &other,
                                   DescribeVpcsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
