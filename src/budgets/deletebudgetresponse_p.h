// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETRESPONSE_P_H
#define QTAWS_DELETEBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetResponse;

class DeleteBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DeleteBudgetResponsePrivate(DeleteBudgetResponse * const q);

    void parseDeleteBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBudgetResponse)
    Q_DISABLE_COPY(DeleteBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
