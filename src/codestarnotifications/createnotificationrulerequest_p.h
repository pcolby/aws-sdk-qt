// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONRULEREQUEST_P_H
#define QTAWS_CREATENOTIFICATIONRULEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "createnotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class CreateNotificationRuleRequest;

class CreateNotificationRuleRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    CreateNotificationRuleRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   CreateNotificationRuleRequest * const q);
    CreateNotificationRuleRequestPrivate(const CreateNotificationRuleRequestPrivate &other,
                                   CreateNotificationRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
