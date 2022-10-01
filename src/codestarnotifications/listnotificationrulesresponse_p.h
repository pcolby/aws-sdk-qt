// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONRULESRESPONSE_P_H
#define QTAWS_LISTNOTIFICATIONRULESRESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class ListNotificationRulesResponse;

class ListNotificationRulesResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit ListNotificationRulesResponsePrivate(ListNotificationRulesResponse * const q);

    void parseListNotificationRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNotificationRulesResponse)
    Q_DISABLE_COPY(ListNotificationRulesResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
