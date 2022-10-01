// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONHISTORIESRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETACTIONHISTORIESRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionHistoriesResponse;

class DescribeBudgetActionHistoriesResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetActionHistoriesResponsePrivate(DescribeBudgetActionHistoriesResponse * const q);

    void parseDescribeBudgetActionHistoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetActionHistoriesResponse)
    Q_DISABLE_COPY(DescribeBudgetActionHistoriesResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
