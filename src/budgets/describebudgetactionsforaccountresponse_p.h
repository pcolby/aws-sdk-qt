// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForAccountResponse;

class DescribeBudgetActionsForAccountResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetActionsForAccountResponsePrivate(DescribeBudgetActionsForAccountResponse * const q);

    void parseDescribeBudgetActionsForAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionsForAccountResponse)
    Q_DISABLE_COPY(DescribeBudgetActionsForAccountResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
