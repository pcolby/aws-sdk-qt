// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "createwirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskDefinitionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayTaskDefinitionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateWirelessGatewayTaskDefinitionResponse(const CreateWirelessGatewayTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWirelessGatewayTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(CreateWirelessGatewayTaskDefinitionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
