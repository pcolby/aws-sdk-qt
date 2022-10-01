// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSESSMENTTEMPLATESREQUEST_P_H
#define QTAWS_DESCRIBEASSESSMENTTEMPLATESREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describeassessmenttemplatesrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeAssessmentTemplatesRequest;

class DescribeAssessmentTemplatesRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeAssessmentTemplatesRequestPrivate(const InspectorRequest::Action action,
                                   DescribeAssessmentTemplatesRequest * const q);
    DescribeAssessmentTemplatesRequestPrivate(const DescribeAssessmentTemplatesRequestPrivate &other,
                                   DescribeAssessmentTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAssessmentTemplatesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
