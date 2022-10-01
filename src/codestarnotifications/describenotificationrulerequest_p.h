// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONRULEREQUEST_P_H
#define QTAWS_DESCRIBENOTIFICATIONRULEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "describenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DescribeNotificationRuleRequest;

class DescribeNotificationRuleRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    DescribeNotificationRuleRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   DescribeNotificationRuleRequest * const q);
    DescribeNotificationRuleRequestPrivate(const DescribeNotificationRuleRequestPrivate &other,
                                   DescribeNotificationRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
