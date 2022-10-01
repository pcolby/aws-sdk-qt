// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSFORBUDGETREQUEST_P_H
#define QTAWS_DESCRIBENOTIFICATIONSFORBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describenotificationsforbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeNotificationsForBudgetRequest;

class DescribeNotificationsForBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeNotificationsForBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeNotificationsForBudgetRequest * const q);
    DescribeNotificationsForBudgetRequestPrivate(const DescribeNotificationsForBudgetRequestPrivate &other,
                                   DescribeNotificationsForBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationsForBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
