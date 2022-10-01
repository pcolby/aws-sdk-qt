// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONREQUEST_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskDefinitionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayTaskDefinitionRequest : public IoTWirelessRequest {

public:
    CreateWirelessGatewayTaskDefinitionRequest(const CreateWirelessGatewayTaskDefinitionRequest &other);
    CreateWirelessGatewayTaskDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
