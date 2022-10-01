// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUDGETACTIONRESPONSE_H
#define QTAWS_UPDATEBUDGETACTIONRESPONSE_H

#include "budgetsresponse.h"
#include "updatebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class UpdateBudgetActionResponsePrivate;

class QTAWSBUDGETS_EXPORT UpdateBudgetActionResponse : public BudgetsResponse {
    Q_OBJECT

public:
    UpdateBudgetActionResponse(const UpdateBudgetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBudgetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBudgetActionResponse)
    Q_DISABLE_COPY(UpdateBudgetActionResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
