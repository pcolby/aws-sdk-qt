// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETREQUEST_P_H
#define QTAWS_CREATEBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "createbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetRequest;

class CreateBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    CreateBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   CreateBudgetRequest * const q);
    CreateBudgetRequestPrivate(const CreateBudgetRequestPrivate &other,
                                   CreateBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
