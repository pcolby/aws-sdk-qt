// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRULEREQUEST_P_H
#define QTAWS_UPDATENOTIFICATIONRULEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "updatenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class UpdateNotificationRuleRequest;

class UpdateNotificationRuleRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    UpdateNotificationRuleRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   UpdateNotificationRuleRequest * const q);
    UpdateNotificationRuleRequestPrivate(const UpdateNotificationRuleRequestPrivate &other,
                                   UpdateNotificationRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
