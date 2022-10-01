// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECHANNELFLOWRESPONSE_H
#define QTAWS_ASSOCIATECHANNELFLOWRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "associatechannelflowrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class AssociateChannelFlowResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT AssociateChannelFlowResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    AssociateChannelFlowResponse(const AssociateChannelFlowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateChannelFlowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateChannelFlowResponse)
    Q_DISABLE_COPY(AssociateChannelFlowResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
