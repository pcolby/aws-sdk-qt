// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKEVENTSREQUEST_P_H
#define QTAWS_DESCRIBESTACKEVENTSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "describestackeventsrequest.h"

namespace QtAws {
namespace CloudFormation {

class DescribeStackEventsRequest;

class DescribeStackEventsRequestPrivate : public CloudFormationRequestPrivate {

public:
    DescribeStackEventsRequestPrivate(const CloudFormationRequest::Action action,
                                   DescribeStackEventsRequest * const q);
    DescribeStackEventsRequestPrivate(const DescribeStackEventsRequestPrivate &other,
                                   DescribeStackEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStackEventsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
