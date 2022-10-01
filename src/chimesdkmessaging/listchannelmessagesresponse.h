// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMESSAGESRESPONSE_H
#define QTAWS_LISTCHANNELMESSAGESRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listchannelmessagesrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMessagesResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelMessagesResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListChannelMessagesResponse(const ListChannelMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelMessagesResponse)
    Q_DISABLE_COPY(ListChannelMessagesResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
