// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKRESPONSE_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "createwirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateWirelessGatewayTaskResponse(const CreateWirelessGatewayTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWirelessGatewayTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayTaskResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
