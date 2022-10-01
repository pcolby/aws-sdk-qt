// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGERESPONSE_H
#define QTAWS_DELETECHANNELMESSAGERESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "deletechannelmessagerequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMessageResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT DeleteChannelMessageResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    DeleteChannelMessageResponse(const DeleteChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelMessageResponse)
    Q_DISABLE_COPY(DeleteChannelMessageResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
