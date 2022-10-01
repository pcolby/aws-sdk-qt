// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKTELEMETRYRESPONSE_H
#define QTAWS_GETNETWORKTELEMETRYRESPONSE_H

#include "networkmanagerresponse.h"
#include "getnetworktelemetryrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkTelemetryResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetNetworkTelemetryResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetNetworkTelemetryResponse(const GetNetworkTelemetryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkTelemetryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkTelemetryResponse)
    Q_DISABLE_COPY(GetNetworkTelemetryResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
