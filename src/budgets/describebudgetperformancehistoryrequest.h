// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYREQUEST_H
#define QTAWS_DESCRIBEBUDGETPERFORMANCEHISTORYREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetPerformanceHistoryRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetPerformanceHistoryRequest : public BudgetsRequest {

public:
    DescribeBudgetPerformanceHistoryRequest(const DescribeBudgetPerformanceHistoryRequest &other);
    DescribeBudgetPerformanceHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetPerformanceHistoryRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
