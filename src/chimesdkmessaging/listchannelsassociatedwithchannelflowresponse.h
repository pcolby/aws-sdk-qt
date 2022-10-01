// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWRESPONSE_H
#define QTAWS_LISTCHANNELSASSOCIATEDWITHCHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "listchannelsassociatedwithchannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsAssociatedWithChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ListChannelsAssociatedWithChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    ListChannelsAssociatedWithChannelFlowResponse(const ListChannelsAssociatedWithChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListChannelsAssociatedWithChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelsAssociatedWithChannelFlowResponse)
    Q_DISABLE_COPY(ListChannelsAssociatedWithChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
