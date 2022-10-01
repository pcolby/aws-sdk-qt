// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONRESPONSE_H
#define QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONRESPONSE_H

#include "budgetsresponse.h"
#include "describesubscribersfornotificationrequest.h"

namespace QtAws {
namespace Budgets {

class DescribeSubscribersForNotificationResponsePrivate;

class QTAWSBUDGETS_EXPORT DescribeSubscribersForNotificationResponse : public BudgetsResponse {
    Q_OBJECT

public:
    DescribeSubscribersForNotificationResponse(const DescribeSubscribersForNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubscribersForNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscribersForNotificationResponse)
    Q_DISABLE_COPY(DescribeSubscribersForNotificationResponse)

};

} // namespace Budgets
} // namespace QtAws

#endif
