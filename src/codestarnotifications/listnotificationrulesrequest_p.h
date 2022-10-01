// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONRULESREQUEST_P_H
#define QTAWS_LISTNOTIFICATIONRULESREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "listnotificationrulesrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListNotificationRulesRequest;

class ListNotificationRulesRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    ListNotificationRulesRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   ListNotificationRulesRequest * const q);
    ListNotificationRulesRequestPrivate(const ListNotificationRulesRequestPrivate &other,
                                   ListNotificationRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotificationRulesRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
