// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETACTIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionRequest;

class DescribeBudgetActionRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetActionRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetActionRequest * const q);
    DescribeBudgetActionRequestPrivate(const DescribeBudgetActionRequestPrivate &other,
                                   DescribeBudgetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
