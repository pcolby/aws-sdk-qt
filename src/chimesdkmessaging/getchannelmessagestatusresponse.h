// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGESTATUSRESPONSE_H
#define QTAWS_GETCHANNELMESSAGESTATUSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "getchannelmessagestatusrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageStatusResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT GetChannelMessageStatusResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    GetChannelMessageStatusResponse(const GetChannelMessageStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelMessageStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMessageStatusResponse)
    Q_DISABLE_COPY(GetChannelMessageStatusResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
