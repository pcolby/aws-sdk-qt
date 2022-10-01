// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeTagsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
