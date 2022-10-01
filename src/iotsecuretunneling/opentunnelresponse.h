// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENTUNNELRESPONSE_H
#define QTAWS_OPENTUNNELRESPONSE_H

#include "iotsecuretunnelingresponse.h"
#include "opentunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class OpenTunnelResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT OpenTunnelResponse : public IoTSecureTunnelingResponse {
    Q_OBJECT

public:
    OpenTunnelResponse(const OpenTunnelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const OpenTunnelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpenTunnelResponse)
    Q_DISABLE_COPY(OpenTunnelResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
