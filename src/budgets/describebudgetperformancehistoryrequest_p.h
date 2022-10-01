// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetperformancehistoryrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetPerformanceHistoryRequest;

class DescribeBudgetPerformanceHistoryRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetPerformanceHistoryRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetPerformanceHistoryRequest * const q);
    DescribeBudgetPerformanceHistoryRequestPrivate(const DescribeBudgetPerformanceHistoryRequestPrivate &other,
                                   DescribeBudgetPerformanceHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetPerformanceHistoryRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
