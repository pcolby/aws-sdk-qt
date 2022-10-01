// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSFORBUDGETRESPONSE_H
#define QTAWS_DESCRIBENOTIFICATIONSFORBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "describenotificationsforbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeNotificationsForBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeNotificationsForBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeNotificationsForBudgetResponse(const DescribeNotificationsForBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotificationsForBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationsForBudgetResponse)
    Q_DISABLE_COPY(DescribeNotificationsForBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
