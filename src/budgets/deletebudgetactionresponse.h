// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUDGETACTIONRESPONSE_H
#define QTAWS_DELETEBUDGETACTIONRESPONSE_H

#include "budgetsresponse.h"
#include "deletebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class DeleteBudgetActionResponsePrivate;

class QTAWSBUDGETS_EXPORT DeleteBudgetActionResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DeleteBudgetActionResponse(const DeleteBudgetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBudgetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBudgetActionResponse)
    Q_DISABLE_COPY(DeleteBudgetActionResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
