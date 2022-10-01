// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINGRESPONSE_H
#define QTAWS_PINGRESPONSE_H

#include "privatenetworksresponse.h"
#include "pingrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class PingResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT PingResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    PingResponse(const PingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PingResponse)
    Q_DISABLE_COPY(PingResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
