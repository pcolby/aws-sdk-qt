// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTREQUEST_P_H
#define QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTREQUEST_P_H

#include "budgetsrequest_p.h"
#include "describebudgetnotificationsforaccountrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetNotificationsForAccountRequest;

class DescribeBudgetNotificationsForAccountRequestPrivate : public BudgetsRequestPrivate {

public:
    DescribeBudgetNotificationsForAccountRequestPrivate(const BudgetsRequest::Action action,
                                   DescribeBudgetNotificationsForAccountRequest * const q);
    DescribeBudgetNotificationsForAccountRequestPrivate(const DescribeBudgetNotificationsForAccountRequestPrivate &other,
                                   DescribeBudgetNotificationsForAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetNotificationsForAccountRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
