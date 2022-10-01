// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBERESPONSE_H
#define QTAWS_SUBSCRIBERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "subscriberequest.h"

namespace QtAws {
namespace CodestarNotifications {

class SubscribeResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT SubscribeResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    SubscribeResponse(const SubscribeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubscribeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeResponse)
    Q_DISABLE_COPY(SubscribeResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
