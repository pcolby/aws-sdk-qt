// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeApplicationRequest;

class DescribeApplicationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeApplicationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeApplicationRequest * const q);
    DescribeApplicationRequestPrivate(const DescribeApplicationRequestPrivate &other,
                                   DescribeApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
