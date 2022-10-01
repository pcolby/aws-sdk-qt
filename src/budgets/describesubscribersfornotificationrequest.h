// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONREQUEST_H
#define QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONREQUEST_H

#include "budgetsrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeSubscribersForNotificationRequestPrivate;

class QTAWSBUDGETS_EXPORT DescribeSubscribersForNotificationRequest : public BudgetsRequest {

public:
    DescribeSubscribersForNotificationRequest(const DescribeSubscribersForNotificationRequest &other);
    DescribeSubscribersForNotificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscribersForNotificationRequest)

};

} // namespace Budgets
} // namespace QtAws

#endif
