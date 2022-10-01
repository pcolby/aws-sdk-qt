// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETREQUEST_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionsForBudgetRequest : public BudgetsRequest {

public:
    DescribeBudgetActionsForBudgetRequest(const DescribeBudgetActionsForBudgetRequest &other);
    DescribeBudgetActionsForBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionsForBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
