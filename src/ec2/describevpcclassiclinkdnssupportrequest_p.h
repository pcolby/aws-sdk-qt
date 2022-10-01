// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H
#define QTAWS_DESCRIBEVPCCLASSICLINKDNSSUPPORTREQUEST_P_H

#include "ec2request_p.h"
#include "describevpcclassiclinkdnssupportrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcClassicLinkDnsSupportRequest;

class DescribeVpcClassicLinkDnsSupportRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeVpcClassicLinkDnsSupportRequestPrivate(const Ec2Request::Action action,
                                   DescribeVpcClassicLinkDnsSupportRequest * const q);
    DescribeVpcClassicLinkDnsSupportRequestPrivate(const DescribeVpcClassicLinkDnsSupportRequestPrivate &other,
                                   DescribeVpcClassicLinkDnsSupportRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVpcClassicLinkDnsSupportRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
