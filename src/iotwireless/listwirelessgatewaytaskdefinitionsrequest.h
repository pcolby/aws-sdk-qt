// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSREQUEST_H
#define QTAWS_LISTWIRELESSGATEWAYTASKDEFINITIONSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewayTaskDefinitionsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessGatewayTaskDefinitionsRequest : public IoTWirelessRequest {

public:
    ListWirelessGatewayTaskDefinitionsRequest(const ListWirelessGatewayTaskDefinitionsRequest &other);
    ListWirelessGatewayTaskDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessGatewayTaskDefinitionsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
