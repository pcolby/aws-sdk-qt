// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEENDPOINTRESPONSE_P_H
#define QTAWS_GETSERVICEENDPOINTRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceEndpointResponse;

class GetServiceEndpointResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetServiceEndpointResponsePrivate(GetServiceEndpointResponse * const q);

    void parseGetServiceEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServiceEndpointResponse)
    Q_DISABLE_COPY(GetServiceEndpointResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
