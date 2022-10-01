// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetResponse;

class DescribeBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetResponsePrivate(DescribeBudgetResponse * const q);

    void parseDescribeBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetResponse)
    Q_DISABLE_COPY(DescribeBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
