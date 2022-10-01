// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGPATTERNREQUEST_P_H
#define QTAWS_DESCRIBELOGPATTERNREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeLogPatternRequest;

class DescribeLogPatternRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeLogPatternRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeLogPatternRequest * const q);
    DescribeLogPatternRequestPrivate(const DescribeLogPatternRequestPrivate &other,
                                   DescribeLogPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
