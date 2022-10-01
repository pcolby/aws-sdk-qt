// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBERESPONSE_H
#define QTAWS_UNSUBSCRIBERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "unsubscriberequest.h"

namespace QtAws {
namespace CodestarNotifications {

class UnsubscribeResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT UnsubscribeResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    UnsubscribeResponse(const UnsubscribeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnsubscribeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeResponse)
    Q_DISABLE_COPY(UnsubscribeResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
