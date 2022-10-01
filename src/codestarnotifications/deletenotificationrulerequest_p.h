// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRULEREQUEST_P_H
#define QTAWS_DELETENOTIFICATIONRULEREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "deletenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteNotificationRuleRequest;

class DeleteNotificationRuleRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    DeleteNotificationRuleRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   DeleteNotificationRuleRequest * const q);
    DeleteNotificationRuleRequestPrivate(const DeleteNotificationRuleRequestPrivate &other,
                                   DeleteNotificationRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationRuleRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
