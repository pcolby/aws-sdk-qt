// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONREQUEST_P_H
#define QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describesubscribersfornotificationrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeSubscribersForNotificationRequest;

class DescribeSubscribersForNotificationRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeSubscribersForNotificationRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeSubscribersForNotificationRequest * const q);
    DescribeSubscribersForNotificationRequestPrivate(const DescribeSubscribersForNotificationRequestPrivate &other,
                                   DescribeSubscribersForNotificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubscribersForNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
