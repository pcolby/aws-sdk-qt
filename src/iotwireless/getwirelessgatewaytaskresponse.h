// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKRESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYTASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayTaskResponse(const GetWirelessGatewayTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(GetWirelessGatewayTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
