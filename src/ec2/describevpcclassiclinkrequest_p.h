// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKREQUEST_P_H
#define QTAWS_DESCRIBEVPCCLASSICLINKREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcclassiclinkrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkRequest;

class DescribeVpcClassicLinkRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcClassicLinkRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcClassicLinkRequest * const q);
    DescribeVpcClassicLinkRequestPrivate(const DescribeVpcClassicLinkRequestPrivate &other,
                                   DescribeVpcClassicLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcClassicLinkRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
