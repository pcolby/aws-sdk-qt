// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetactionsforbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForBudgetRequest;

class DescribeBudgetActionsForBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetActionsForBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetActionsForBudgetRequest * const q);
    DescribeBudgetActionsForBudgetRequestPrivate(const DescribeBudgetActionsForBudgetRequestPrivate &other,
                                   DescribeBudgetActionsForBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionsForBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
