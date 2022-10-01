// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPASSESSMENTREQUEST_P_H
#define QTAWS_DESCRIBEAPPASSESSMENTREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "describeappassessmentrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppAssessmentRequest;

class DescribeAppAssessmentRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DescribeAppAssessmentRequestPrivate(const ResilienceHubRequest::Action action,
                                   DescribeAppAssessmentRequest * const q);
    DescribeAppAssessmentRequestPrivate(const DescribeAppAssessmentRequestPrivate &other,
                                   DescribeAppAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppAssessmentRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
