// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETREQUEST_P_H
#define QTAWS_DELETEBUDGETREQUEST_P_H

#include "budgetsrequest_p.h"
#include "deletebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetRequest;

class DeleteBudgetRequestPrivate : public BudgetsRequestPrivate {

public:
    DeleteBudgetRequestPrivate(const BudgetsRequest::Action action,
                                   DeleteBudgetRequest * const q);
    DeleteBudgetRequestPrivate(const DeleteBudgetRequestPrivate &other,
                                   DeleteBudgetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
