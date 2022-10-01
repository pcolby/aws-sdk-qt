// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describeeventsubscriptionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeEventSubscriptionsRequest;

class DescribeEventSubscriptionsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeEventSubscriptionsRequestPrivate(const RdsRequest::Action action,
                                   DescribeEventSubscriptionsRequest * const q);
    DescribeEventSubscriptionsRequestPrivate(const DescribeEventSubscriptionsRequestPrivate &other,
                                   DescribeEventSubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventSubscriptionsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
