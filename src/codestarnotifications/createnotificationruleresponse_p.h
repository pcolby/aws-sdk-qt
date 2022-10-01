// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONRULERESPONSE_P_H
#define QTAWS_CREATENOTIFICATIONRULERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class CreateNotificationRuleResponse;

class CreateNotificationRuleResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit CreateNotificationRuleResponsePrivate(CreateNotificationRuleResponse * const q);

    void parseCreateNotificationRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNotificationRuleResponse)
    Q_DISABLE_COPY(CreateNotificationRuleResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
