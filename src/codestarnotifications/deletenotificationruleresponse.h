// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONRULERESPONSE_H
#define QTAWS_DELETENOTIFICATIONRULERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "deletenotificationrulerequest.h"

namespace QtAws {
namespace CodestarNotifications {

class DeleteNotificationRuleResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT DeleteNotificationRuleResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    DeleteNotificationRuleResponse(const DeleteNotificationRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotificationRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationRuleResponse)
    Q_DISABLE_COPY(DeleteNotificationRuleResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
