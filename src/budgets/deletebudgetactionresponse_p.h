// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETACTIONRESPONSE_P_H
#define QTAWS_DELETEBUDGETACTIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetActionResponse;

class DeleteBudgetActionResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DeleteBudgetActionResponsePrivate(DeleteBudgetActionResponse * const q);

    void parseDeleteBudgetActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBudgetActionResponse)
    Q_DISABLE_COPY(DeleteBudgetActionResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
