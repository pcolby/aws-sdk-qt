// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETREQUEST_P_H
#define QTAWS_UPDATEBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "updatebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetRequest;

class UpdateBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    UpdateBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   UpdateBudgetRequest * const q);
    UpdateBudgetRequestPrivate(const UpdateBudgetRequestPrivate &other,
                                   UpdateBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
