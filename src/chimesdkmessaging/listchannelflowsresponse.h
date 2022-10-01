// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELFLOWSRESPONSE_H
#define QTAWS_LISTCHANNELFLOWSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listchannelflowsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelFlowsResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelFlowsResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListChannelFlowsResponse(const ListChannelFlowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelFlowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelFlowsResponse)
    Q_DISABLE_COPY(ListChannelFlowsResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
