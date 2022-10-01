// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSSANDBOXCHANNELRESPONSE_H
#define QTAWS_GETAPNSSANDBOXCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getapnssandboxchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsSandboxChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetApnsSandboxChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApnsSandboxChannelResponse(const GetApnsSandboxChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApnsSandboxChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApnsSandboxChannelResponse)
    Q_DISABLE_COPY(GetApnsSandboxChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
