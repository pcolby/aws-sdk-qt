// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTRESPONSE_H
#define QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetnotificationsforaccountrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetNotificationsForAccountResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetNotificationsForAccountResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetNotificationsForAccountResponse(const DescribeBudgetNotificationsForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetNotificationsForAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetNotificationsForAccountResponse)
    Q_DISABLE_COPY(DescribeBudgetNotificationsForAccountResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
