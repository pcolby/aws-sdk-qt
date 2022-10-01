// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKANALYZERCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETENETWORKANALYZERCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteNetworkAnalyzerConfigurationResponse;

class DeleteNetworkAnalyzerConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteNetworkAnalyzerConfigurationResponsePrivate(DeleteNetworkAnalyzerConfigurationResponse * const q);

    void parseDeleteNetworkAnalyzerConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAnalyzerConfigurationResponse)
    Q_DISABLE_COPY(DeleteNetworkAnalyzerConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
