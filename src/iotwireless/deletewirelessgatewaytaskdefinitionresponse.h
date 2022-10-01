// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletewirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskDefinitionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessGatewayTaskDefinitionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteWirelessGatewayTaskDefinitionResponse(const DeleteWirelessGatewayTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWirelessGatewayTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessGatewayTaskDefinitionResponse)
    Q_DISABLE_COPY(DeleteWirelessGatewayTaskDefinitionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
