// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMCHANNELRESPONSE_H
#define QTAWS_GETADMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAdmChannelResponsePrivate;

class QTAWSPINPOINT_EXPORT GetAdmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetAdmChannelResponse(const GetAdmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAdmChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdmChannelResponse)
    Q_DISABLE_COPY(GetAdmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
