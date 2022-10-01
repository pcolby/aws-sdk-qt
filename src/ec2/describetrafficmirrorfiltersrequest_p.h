// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORFILTERSREQUEST_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORFILTERSREQUEST_P_H

#include "ec2request_p.h"
#include "describetrafficmirrorfiltersrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorFiltersRequest;

class DescribeTrafficMirrorFiltersRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTrafficMirrorFiltersRequestPrivate(const Ec2Request::Action action,
                                   DescribeTrafficMirrorFiltersRequest * const q);
    DescribeTrafficMirrorFiltersRequestPrivate(const DescribeTrafficMirrorFiltersRequestPrivate &other,
                                   DescribeTrafficMirrorFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorFiltersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
