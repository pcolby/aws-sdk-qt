// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTESTEVENTNOTIFICATIONRESPONSE_H
#define QTAWS_SENDTESTEVENTNOTIFICATIONRESPONSE_H

#include "mturkresponse.h"
#include "sendtesteventnotificationrequest.h"

namespace QtAws {
namespace MTurk {

class SendTestEventNotificationResponsePrivate;

class QTAWSMTURK_EXPORT SendTestEventNotificationResponse : public MTurkResponse {
    Q_OBJECT

public:
    SendTestEventNotificationResponse(const SendTestEventNotificationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendTestEventNotificationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTestEventNotificationResponse)
    Q_DISABLE_COPY(SendTestEventNotificationResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
