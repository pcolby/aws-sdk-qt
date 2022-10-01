// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETACTIONHISTORIESREQUEST_H
#define QTAWS_DESCRIBEBUDGETACTIONHISTORIESREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetActionHistoriesRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetActionHistoriesRequest : public BudgetsRequest {

public:
    DescribeBudgetActionHistoriesRequest(const DescribeBudgetActionHistoriesRequest &other);
    DescribeBudgetActionHistoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetActionHistoriesRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
