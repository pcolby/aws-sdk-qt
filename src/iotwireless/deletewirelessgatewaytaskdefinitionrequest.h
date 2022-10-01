// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONREQUEST_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskDefinitionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteWirelessGatewayTaskDefinitionRequest : public IoTWirelessRequest {

public:
    DeleteWirelessGatewayTaskDefinitionRequest(const DeleteWirelessGatewayTaskDefinitionRequest &other);
    DeleteWirelessGatewayTaskDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
