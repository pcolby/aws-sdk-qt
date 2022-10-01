// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETRESPONSE_P_H
#define QTAWS_CREATEBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetResponse;

class CreateBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit CreateBudgetResponsePrivate(CreateBudgetResponse * const q);

    void parseCreateBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBudgetResponse)
    Q_DISABLE_COPY(CreateBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
