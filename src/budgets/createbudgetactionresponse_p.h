// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETACTIONRESPONSE_P_H
#define QTAWS_CREATEBUDGETACTIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetActionResponse;

class CreateBudgetActionResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit CreateBudgetActionResponsePrivate(CreateBudgetActionResponse * const q);

    void parseCreateBudgetActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBudgetActionResponse)
    Q_DISABLE_COPY(CreateBudgetActionResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
