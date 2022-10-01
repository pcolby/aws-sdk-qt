// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetactionsforaccountrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForAccountRequest;

class DescribeBudgetActionsForAccountRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetActionsForAccountRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetActionsForAccountRequest * const q);
    DescribeBudgetActionsForAccountRequestPrivate(const DescribeBudgetActionsForAccountRequestPrivate &other,
                                   DescribeBudgetActionsForAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionsForAccountRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
