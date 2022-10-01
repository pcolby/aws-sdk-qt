// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKANALYZERCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATENETWORKANALYZERCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class UpdateNetworkAnalyzerConfigurationResponse;

class UpdateNetworkAnalyzerConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit UpdateNetworkAnalyzerConfigurationResponsePrivate(UpdateNetworkAnalyzerConfigurationResponse * const q);

    void parseUpdateNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(UpdateNetworkAnalyzerConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
