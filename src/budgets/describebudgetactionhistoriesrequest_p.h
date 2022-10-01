// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONHISTORIESREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETACTIONHISTORIESREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetactionhistoriesrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionHistoriesRequest;

class DescribeBudgetActionHistoriesRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetActionHistoriesRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetActionHistoriesRequest * const q);
    DescribeBudgetActionHistoriesRequestPrivate(const DescribeBudgetActionHistoriesRequestPrivate &other,
                                   DescribeBudgetActionHistoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionHistoriesRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
