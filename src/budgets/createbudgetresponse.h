// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUDGETRESPONSE_H
#define QTAWS_CREATEBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "createbudgetrequest.h"

namespace QtAws {
namespace Budgets {

class CreateBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT CreateBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    CreateBudgetResponse(const CreateBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBudgetResponse)
    Q_DISABLE_COPY(CreateBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
