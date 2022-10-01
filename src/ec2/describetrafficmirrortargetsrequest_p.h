// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORTARGETSREQUEST_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORTARGETSREQUEST_P_H

#include "ec2request_p.h"
#include "describetrafficmirrortargetsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorTargetsRequest;

class DescribeTrafficMirrorTargetsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTrafficMirrorTargetsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTrafficMirrorTargetsRequest * const q);
    DescribeTrafficMirrorTargetsRequestPrivate(const DescribeTrafficMirrorTargetsRequestPrivate &other,
                                   DescribeTrafficMirrorTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorTargetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
