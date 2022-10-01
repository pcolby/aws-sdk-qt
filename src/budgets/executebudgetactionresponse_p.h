// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEBUDGETACTIONRESPONSE_P_H
#define QTAWS_EXECUTEBUDGETACTIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class ExecuteBudgetActionResponse;

class ExecuteBudgetActionResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit ExecuteBudgetActionResponsePrivate(ExecuteBudgetActionResponse * const q);

    void parseExecuteBudgetActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteBudgetActionResponse)
    Q_DISABLE_COPY(ExecuteBudgetActionResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
