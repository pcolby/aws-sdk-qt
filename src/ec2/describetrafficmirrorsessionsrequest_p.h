// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORSESSIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describetrafficmirrorsessionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorSessionsRequest;

class DescribeTrafficMirrorSessionsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTrafficMirrorSessionsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTrafficMirrorSessionsRequest * const q);
    DescribeTrafficMirrorSessionsRequestPrivate(const DescribeTrafficMirrorSessionsRequestPrivate &other,
                                   DescribeTrafficMirrorSessionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorSessionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
