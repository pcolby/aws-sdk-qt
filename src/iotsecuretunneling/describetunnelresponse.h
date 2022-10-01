// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETUNNELRESPONSE_H
#define QTAWS_DESCRIBETUNNELRESPONSE_H

#include "iotsecuretunnelingresponse.h"
#include "describetunnelrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class DescribeTunnelResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT DescribeTunnelResponse : public IoTSecureTunnelingResponse {
    Q_OBJECT

public:
    DescribeTunnelResponse(const DescribeTunnelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTunnelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTunnelResponse)
    Q_DISABLE_COPY(DescribeTunnelResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
