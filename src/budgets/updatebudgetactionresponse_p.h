// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETACTIONRESPONSE_P_H
#define QTAWS_UPDATEBUDGETACTIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetActionResponse;

class UpdateBudgetActionResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit UpdateBudgetActionResponsePrivate(UpdateBudgetActionResponse * const q);

    void parseUpdateBudgetActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBudgetActionResponse)
    Q_DISABLE_COPY(UpdateBudgetActionResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
