// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTREQUEST_P_H
#define QTAWS_DESCRIBECOMPONENTREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "describecomponentrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentRequest;

class DescribeComponentRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DescribeComponentRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DescribeComponentRequest * const q);
    DescribeComponentRequestPrivate(const DescribeComponentRequestPrivate &other,
                                   DescribeComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComponentRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
