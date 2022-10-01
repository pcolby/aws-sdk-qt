// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEENDPOINTRESPONSE_H
#define QTAWS_GETSERVICEENDPOINTRESPONSE_H

#include "iotwirelessresponse.h"
#include "getserviceendpointrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceEndpointResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetServiceEndpointResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetServiceEndpointResponse(const GetServiceEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceEndpointResponse)
    Q_DISABLE_COPY(GetServiceEndpointResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
