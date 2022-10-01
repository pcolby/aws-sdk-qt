// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTRUNSREQUEST_P_H
#define QTAWS_DESCRIBEASSESSMENTRUNSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describeassessmentrunsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentRunsRequest;

class DescribeAssessmentRunsRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeAssessmentRunsRequestPrivate(const InspectorRequest::Action action,
                                   DescribeAssessmentRunsRequest * const q);
    DescribeAssessmentRunsRequestPrivate(const DescribeAssessmentRunsRequestPrivate &other,
                                   DescribeAssessmentRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentRunsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
