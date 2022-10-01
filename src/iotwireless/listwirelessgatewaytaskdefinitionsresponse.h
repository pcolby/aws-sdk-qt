// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSRESPONSE_H
#define QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSRESPONSE_H

#include "iotwirelessresponse.h"
#include "listwirelessgatewaytaskdefinitionsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewayTaskDefinitionsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessGatewayTaskDefinitionsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListWirelessGatewayTaskDefinitionsResponse(const ListWirelessGatewayTaskDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWirelessGatewayTaskDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessGatewayTaskDefinitionsResponse)
    Q_DISABLE_COPY(ListWirelessGatewayTaskDefinitionsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
