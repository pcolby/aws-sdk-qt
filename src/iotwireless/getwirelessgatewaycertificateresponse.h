// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYCERTIFICATERESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYCERTIFICATERESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewaycertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayCertificateResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayCertificateResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayCertificateResponse(const GetWirelessGatewayCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayCertificateResponse)
    Q_DISABLE_COPY(GetWirelessGatewayCertificateResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
