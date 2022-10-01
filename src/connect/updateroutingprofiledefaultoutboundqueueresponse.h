// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUERESPONSE_H
#define QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUERESPONSE_H

#include "connectresponse.h"
#include "updateroutingprofiledefaultoutboundqueuerequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileDefaultOutboundQueueResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileDefaultOutboundQueueResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateRoutingProfileDefaultOutboundQueueResponse(const UpdateRoutingProfileDefaultOutboundQueueRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoutingProfileDefaultOutboundQueueRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileDefaultOutboundQueueResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileDefaultOutboundQueueResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
