// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETACTIONREQUEST_P_H
#define QTAWS_CREATEBUDGETACTIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "createbudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetActionRequest;

class CreateBudgetActionRequestPrivate : public BudgetsRequestPrivate {

public:
    CreateBudgetActionRequestPrivate(const BudgetsRequest::Action action,
                                   CreateBudgetActionRequest * const q);
    CreateBudgetActionRequestPrivate(const CreateBudgetActionRequestPrivate &other,
                                   CreateBudgetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
