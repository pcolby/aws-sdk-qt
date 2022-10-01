// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEENDPOINTREQUEST_H
#define QTAWS_GETSERVICEENDPOINTREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceEndpointRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetServiceEndpointRequest : public IoTWirelessRequest {

public:
    GetServiceEndpointRequest(const GetServiceEndpointRequest &other);
    GetServiceEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceEndpointRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
