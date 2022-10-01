// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRULERESPONSE_P_H
#define QTAWS_DELETENOTIFICATIONRULERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteNotificationRuleResponse;

class DeleteNotificationRuleResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit DeleteNotificationRuleResponsePrivate(DeleteNotificationRuleResponse * const q);

    void parseDeleteNotificationRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNotificationRuleResponse)
    Q_DISABLE_COPY(DeleteNotificationRuleResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
