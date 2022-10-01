// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETRESPONSE_H
#define QTAWS_UPDATEBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "updatebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT UpdateBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    UpdateBudgetResponse(const UpdateBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBudgetResponse)
    Q_DISABLE_COPY(UpdateBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
