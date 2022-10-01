// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTREQUEST_H
#define QTAWS_DESCRIBEBUDGETNOTIFICATIONSFORACCOUNTREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeBudgetNotificationsForAccountRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeBudgetNotificationsForAccountRequest : public BudgetsRequest {

public:
    DescribeBudgetNotificationsForAccountRequest(const DescribeBudgetNotificationsForAccountRequest &other);
    DescribeBudgetNotificationsForAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBudgetNotificationsForAccountRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
