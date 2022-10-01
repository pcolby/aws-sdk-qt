// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKANALYZERCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETNETWORKANALYZERCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetNetworkAnalyzerConfigurationResponse;

class GetNetworkAnalyzerConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetNetworkAnalyzerConfigurationResponsePrivate(GetNetworkAnalyzerConfigurationResponse * const q);

    void parseGetNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(GetNetworkAnalyzerConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
