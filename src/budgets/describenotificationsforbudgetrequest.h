// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSFORBUDGETREQUEST_H
#define QTAWS_DESCRIBENOTIFICATIONSFORBUDGETREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeNotificationsForBudgetRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeNotificationsForBudgetRequest : public BudgetsRequest {

public:
    DescribeNotificationsForBudgetRequest(const DescribeNotificationsForBudgetRequest &other);
    DescribeNotificationsForBudgetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationsForBudgetRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
