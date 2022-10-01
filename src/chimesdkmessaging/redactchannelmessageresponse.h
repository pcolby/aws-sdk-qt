// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGERESPONSE_H
#define QTAWS_REDACTCHANNELMESSAGERESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "redactchannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class RedactChannelMessageResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT RedactChannelMessageResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    RedactChannelMessageResponse(const RedactChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RedactChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactChannelMessageResponse)
    Q_DISABLE_COPY(RedactChannelMessageResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
