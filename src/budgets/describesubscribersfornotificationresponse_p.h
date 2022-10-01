// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONRESPONSE_P_H
#define QTAWS_DESCRIBESUBSCRIBERSFORNOTIFICATIONRESPONSE_P_H

#include "budgetsresponse_p.h"

namespace QtAws {
namespace Budgets {

class DescribeSubscribersForNotificationResponse;

class DescribeSubscribersForNotificationResponsePrivate : public BudgetsResponsePrivate {

public:

    explicit DescribeSubscribersForNotificationResponsePrivate(DescribeSubscribersForNotificationResponse * const q);

    void parseDescribeSubscribersForNotificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSubscribersForNotificationResponse)
    Q_DISABLE_COPY(DescribeSubscribersForNotificationResponsePrivate)

};

} // namespace Budgets
} // namespace QtAws

#endif
