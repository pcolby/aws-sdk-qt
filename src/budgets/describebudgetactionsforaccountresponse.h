// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTRESPONSE_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetactionsforaccountrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForAccountResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionsForAccountResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetActionsForAccountResponse(const DescribeBudgetActionsForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetActionsForAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionsForAccountResponse)
    Q_DISABLE_COPY(DescribeBudgetActionsForAccountResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
