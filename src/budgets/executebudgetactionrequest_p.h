// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEBUDGETACTIONREQUEST_P_H
#define QTAWS_EXECUTEBUDGETACTIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "executebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class ExecuteBudgetActionRequest;

class ExecuteBudgetActionRequestPrivate : public BudgetsRequestPrivate {

public:
    ExecuteBudgetActionRequestPrivate(const BudgetsRequest::Action action,
                                   ExecuteBudgetActionRequest * const q);
    ExecuteBudgetActionRequestPrivate(const ExecuteBudgetActionRequestPrivate &other,
                                   ExecuteBudgetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
