// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETRESPONSE_H
#define QTAWS_DESCRIBEBUDGETRESPONSE_H

#include "budgetsresponse.h"
#include "describebudgetrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeBudgetResponse(const DescribeBudgetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBudgetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetResponse)
    Q_DISABLE_COPY(DescribeBudgetResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
