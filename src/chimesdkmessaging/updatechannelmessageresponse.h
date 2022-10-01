// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELMESSAGERESPONSE_H
#define QTAWS_UPDATECHANNELMESSAGERESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "updatechannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class UpdateChannelMessageResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT UpdateChannelMessageResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    UpdateChannelMessageResponse(const UpdateChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateChannelMessageResponse)
    Q_DISABLE_COPY(UpdateChannelMessageResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
