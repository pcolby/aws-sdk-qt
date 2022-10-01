// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWIRELESSGATEWAYSREQUEST_H
#define QTAWS_LISTWIRELESSGATEWAYSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListWirelessGatewaysRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListWirelessGatewaysRequest : public IoTWirelessRequest {

public:
    ListWirelessGatewaysRequest(const ListWirelessGatewaysRequest &other);
    ListWirelessGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWirelessGatewaysRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
