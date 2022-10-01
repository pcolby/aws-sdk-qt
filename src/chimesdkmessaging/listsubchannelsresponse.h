// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBCHANNELSRESPONSE_H
#define QTAWS_LISTSUBCHANNELSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listsubchannelsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListSubChannelsResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListSubChannelsResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListSubChannelsResponse(const ListSubChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubChannelsResponse)
    Q_DISABLE_COPY(ListSubChannelsResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
