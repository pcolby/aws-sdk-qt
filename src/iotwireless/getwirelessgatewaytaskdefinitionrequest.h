// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONREQUEST_H
#define QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskDefinitionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayTaskDefinitionRequest : public IoTWirelessRequest {

public:
    GetWirelessGatewayTaskDefinitionRequest(const GetWirelessGatewayTaskDefinitionRequest &other);
    GetWirelessGatewayTaskDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
