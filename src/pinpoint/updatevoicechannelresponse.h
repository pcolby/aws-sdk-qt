// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOICECHANNELRESPONSE_H
#define QTAWS_UPDATEVOICECHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updatevoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateVoiceChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateVoiceChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateVoiceChannelResponse(const UpdateVoiceChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVoiceChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVoiceChannelResponse)
    Q_DISABLE_COPY(UpdateVoiceChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
