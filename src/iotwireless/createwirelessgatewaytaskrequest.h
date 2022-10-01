// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKREQUEST_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayTaskRequest : public IoTWirelessRequest {

public:
    CreateWirelessGatewayTaskRequest(const CreateWirelessGatewayTaskRequest &other);
    CreateWirelessGatewayTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
