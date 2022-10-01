// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetPerformanceHistoryResponse;

class DescribeBudgetPerformanceHistoryResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetPerformanceHistoryResponsePrivate(DescribeBudgetPerformanceHistoryResponse * const q);

    void parseDescribeBudgetPerformanceHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetPerformanceHistoryResponse)
    Q_DISABLE_COPY(DescribeBudgetPerformanceHistoryResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
