// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSETUNNELRESPONSE_H
#define QTAWS_CLOSETUNNELRESPONSE_H

#include "iotsecuretunnelingresponse.h"
#include "closetunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class CloseTunnelResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT CloseTunnelResponse : public IoTSecureTunnelingResponse {
    Q_OBJECT

public:
    CloseTunnelResponse(const CloseTunnelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloseTunnelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseTunnelResponse)
    Q_DISABLE_COPY(CloseTunnelResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
