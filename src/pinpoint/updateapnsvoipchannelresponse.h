// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSVOIPCHANNELRESPONSE_H
#define QTAWS_UPDATEAPNSVOIPCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updateapnsvoipchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsVoipChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateApnsVoipChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateApnsVoipChannelResponse(const UpdateApnsVoipChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApnsVoipChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApnsVoipChannelResponse)
    Q_DISABLE_COPY(UpdateApnsVoipChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
