// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETACTIONRESPONSE_H
#define QTAWS_CREATEBUDGETACTIONRESPONSE_H

#include "budgetsresponse.h"
#include "createbudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetActionResponsePrivate;

class QTAWSBUDGETS_EXPORT CreateBudgetActionResponse : public BudgetsResponse {
    Q_OBJECT

public:
    CreateBudgetActionResponse(const CreateBudgetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBudgetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBudgetActionResponse)
    Q_DISABLE_COPY(CreateBudgetActionResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
