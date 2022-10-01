// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONRULESRESPONSE_H
#define QTAWS_LISTNOTIFICATIONRULESRESPONSE_H

#include "codestarnotificationsresponse.h"
#include "listnotificationrulesrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListNotificationRulesResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT ListNotificationRulesResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    ListNotificationRulesResponse(const ListNotificationRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNotificationRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNotificationRulesResponse)
    Q_DISABLE_COPY(ListNotificationRulesResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
