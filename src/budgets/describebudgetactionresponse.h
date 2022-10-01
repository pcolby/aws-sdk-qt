// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONRESPONSE_H
#define QTAWS_DESCRIBEBUDGETACTIONRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetactionrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetActionResponse(const DescribeBudgetActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionResponse)
    Q_DISABLE_COPY(DescribeBudgetActionResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
