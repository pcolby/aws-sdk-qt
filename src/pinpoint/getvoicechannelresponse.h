// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECHANNELRESPONSE_H
#define QTAWS_GETVOICECHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getvoicechannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetVoiceChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetVoiceChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetVoiceChannelResponse(const GetVoiceChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceChannelResponse)
    Q_DISABLE_COPY(GetVoiceChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
