// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETRESPONSE_H
#define QTAWS_DELETEBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "deletebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT DeleteBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DeleteBudgetResponse(const DeleteBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBudgetResponse)
    Q_DISABLE_COPY(DeleteBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
