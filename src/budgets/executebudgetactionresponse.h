// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEBUDGETACTIONRESPONSE_H
#define QTAWS_EXECUTEBUDGETACTIONRESPONSE_H

#include "budgetsresponse.h"
#include "executebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class ExecuteBudgetActionResponsePrivate;

class QTAWSBUDGETS_EXPORT ExecuteBudgetActionResponse : public BudgetsResponse {
    Q_OBJECT

public:
    ExecuteBudgetActionResponse(const ExecuteBudgetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteBudgetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteBudgetActionResponse)
    Q_DISABLE_COPY(ExecuteBudgetActionResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
