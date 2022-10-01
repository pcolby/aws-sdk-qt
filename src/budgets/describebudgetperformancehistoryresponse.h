// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYRESPONSE_H
#define QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetperformancehistoryrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetPerformanceHistoryResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetPerformanceHistoryResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetPerformanceHistoryResponse(const DescribeBudgetPerformanceHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetPerformanceHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetPerformanceHistoryResponse)
    Q_DISABLE_COPY(DescribeBudgetPerformanceHistoryResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
