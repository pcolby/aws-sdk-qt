// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETACTIONREQUEST_P_H
#define QTAWS_UPDATEBUDGETACTIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "updatebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetActionRequest;

class UpdateBudgetActionRequestPrivate : public BudgetsRequestPrivate {

public:
    UpdateBudgetActionRequestPrivate(const BudgetsRequest::Action action,
                                   UpdateBudgetActionRequest * const q);
    UpdateBudgetActionRequestPrivate(const UpdateBudgetActionRequestPrivate &other,
                                   UpdateBudgetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
