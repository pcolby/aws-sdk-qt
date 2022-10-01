// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETRESPONSE_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetactionsforbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionsForBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetActionsForBudgetResponse(const DescribeBudgetActionsForBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetActionsForBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionsForBudgetResponse)
    Q_DISABLE_COPY(DescribeBudgetActionsForBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
