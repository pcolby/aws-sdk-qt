// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGCMCHANNELRESPONSE_H
#define QTAWS_GETGCMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getgcmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetGcmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetGcmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetGcmChannelResponse(const GetGcmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGcmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGcmChannelResponse)
    Q_DISABLE_COPY(GetGcmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
