// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAILSREQUEST_P_H
#define QTAWS_DESCRIBETRAILSREQUEST_P_H

#include "cloudtrailrequest_p.h"
#include "describetrailsrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeTrailsRequest;

class DescribeTrailsRequestPrivate : public CloudTrailRequestPrivate {

public:
    DescribeTrailsRequestPrivate(const CloudTrailRequest::Action action,
                                   DescribeTrailsRequest * const q);
    DescribeTrailsRequestPrivate(const DescribeTrailsRequestPrivate &other,
                                   DescribeTrailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrailsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
