// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKANALYZERCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATENETWORKANALYZERCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CreateNetworkAnalyzerConfigurationResponse;

class CreateNetworkAnalyzerConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CreateNetworkAnalyzerConfigurationResponsePrivate(CreateNetworkAnalyzerConfigurationResponse * const q);

    void parseCreateNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(CreateNetworkAnalyzerConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
