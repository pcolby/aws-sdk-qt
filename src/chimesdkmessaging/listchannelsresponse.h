// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSRESPONSE_H
#define QTAWS_LISTCHANNELSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listchannelsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelsResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListChannelsResponse(const ListChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsResponse)
    Q_DISABLE_COPY(ListChannelsResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
