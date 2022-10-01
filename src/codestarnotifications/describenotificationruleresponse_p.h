// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONRULERESPONSE_P_H
#define QTAWS_DESCRIBENOTIFICATIONRULERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class DescribeNotificationRuleResponse;

class DescribeNotificationRuleResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit DescribeNotificationRuleResponsePrivate(DescribeNotificationRuleResponse * const q);

    void parseDescribeNotificationRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationRuleResponse)
    Q_DISABLE_COPY(DescribeNotificationRuleResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
