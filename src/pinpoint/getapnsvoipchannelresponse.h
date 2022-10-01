// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSVOIPCHANNELRESPONSE_H
#define QTAWS_GETAPNSVOIPCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsVoipChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApnsVoipChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApnsVoipChannelResponse(const GetApnsVoipChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApnsVoipChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsVoipChannelResponse)
    Q_DISABLE_COPY(GetApnsVoipChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
