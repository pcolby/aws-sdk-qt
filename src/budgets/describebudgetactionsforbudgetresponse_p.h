// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForBudgetResponse;

class DescribeBudgetActionsForBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetActionsForBudgetResponsePrivate(DescribeBudgetActionsForBudgetResponse * const q);

    void parseDescribeBudgetActionsForBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionsForBudgetResponse)
    Q_DISABLE_COPY(DescribeBudgetActionsForBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
