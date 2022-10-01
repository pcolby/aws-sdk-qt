// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTARGETSREQUEST_P_H
#define QTAWS_DESCRIBEASSESSMENTTARGETSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describeassessmenttargetsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTargetsRequest;

class DescribeAssessmentTargetsRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeAssessmentTargetsRequestPrivate(const InspectorRequest::Action action,
                                   DescribeAssessmentTargetsRequest * const q);
    DescribeAssessmentTargetsRequestPrivate(const DescribeAssessmentTargetsRequestPrivate &other,
                                   DescribeAssessmentTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentTargetsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
