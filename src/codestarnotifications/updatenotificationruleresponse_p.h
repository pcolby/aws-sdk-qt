// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRULERESPONSE_P_H
#define QTAWS_UPDATENOTIFICATIONRULERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class UpdateNotificationRuleResponse;

class UpdateNotificationRuleResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit UpdateNotificationRuleResponsePrivate(UpdateNotificationRuleResponse * const q);

    void parseUpdateNotificationRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNotificationRuleResponse)
    Q_DISABLE_COPY(UpdateNotificationRuleResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
