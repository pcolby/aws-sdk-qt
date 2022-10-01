// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONHISTORIESRESPONSE_H
#define QTAWS_DESCRIBEBUDGETACTIONHISTORIESRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetactionhistoriesrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionHistoriesResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionHistoriesResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetActionHistoriesResponse(const DescribeBudgetActionHistoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetActionHistoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionHistoriesResponse)
    Q_DISABLE_COPY(DescribeBudgetActionHistoriesResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
