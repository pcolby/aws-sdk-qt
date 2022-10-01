// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENOTIFICATIONRULERESPONSE_H
#define QTAWS_UPDATENOTIFICATIONRULERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "updatenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class UpdateNotificationRuleResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT UpdateNotificationRuleResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    UpdateNotificationRuleResponse(const UpdateNotificationRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNotificationRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNotificationRuleResponse)
    Q_DISABLE_COPY(UpdateNotificationRuleResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
