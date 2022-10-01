// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETRESPONSE_P_H
#define QTAWS_UPDATEBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetResponse;

class UpdateBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit UpdateBudgetResponsePrivate(UpdateBudgetResponse * const q);

    void parseUpdateBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBudgetResponse)
    Q_DISABLE_COPY(UpdateBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
