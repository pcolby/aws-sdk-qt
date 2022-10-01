// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTREQUEST_H
#define QTAWS_DESCRIBEBUDGETACTIONSFORACCOUNTREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionsForAccountRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionsForAccountRequest : public BudgetsRequest {

public:
    DescribeBudgetActionsForAccountRequest(const DescribeBudgetActionsForAccountRequest &other);
    DescribeBudgetActionsForAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionsForAccountRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
