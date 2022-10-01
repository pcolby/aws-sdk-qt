// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSFORBUDGETRESPONSE_P_H
#define QTAWS_DESCRIBENOTIFICATIONSFORBUDGETRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeNotificationsForBudgetResponse;

class DescribeNotificationsForBudgetResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeNotificationsForBudgetResponsePrivate(DescribeNotificationsForBudgetResponse * const q);

    void parseDescribeNotificationsForBudgetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationsForBudgetResponse)
    Q_DISABLE_COPY(DescribeNotificationsForBudgetResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
