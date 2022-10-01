// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETACTIONREQUEST_P_H
#define QTAWS_DELETEBUDGETACTIONREQUEST_P_H

#include "budgetsrequest_p.h"
#include "deletebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetActionRequest;

class DeleteBudgetActionRequestPrivate : public BudgetsRequestPrivate {

public:
    DeleteBudgetActionRequestPrivate(const BudgetsRequest::Action action,
                                   DeleteBudgetActionRequest * const q);
    DeleteBudgetActionRequestPrivate(const DeleteBudgetActionRequestPrivate &other,
                                   DeleteBudgetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBudgetActionRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
