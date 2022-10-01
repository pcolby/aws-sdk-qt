// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTRESPONSE_P_H
#define QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetNotificationsForAccountResponse;

class DescribeBudgetNotificationsForAccountResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeBudgetNotificationsForAccountResponsePrivate(DescribeBudgetNotificationsForAccountResponse * const q);

    void parseDescribeBudgetNotificationsForAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBudgetNotificationsForAccountResponse)
    Q_DISABLE_COPY(DescribeBudgetNotificationsForAccountResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
