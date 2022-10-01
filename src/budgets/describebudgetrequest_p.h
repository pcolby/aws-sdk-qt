// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetRequest;

class DescribeBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetRequest * const q);
    DescribeBudgetRequestPrivate(const DescribeBudgetRequestPrivate &other,
                                   DescribeBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
