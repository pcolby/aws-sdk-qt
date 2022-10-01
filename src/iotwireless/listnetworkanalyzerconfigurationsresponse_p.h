// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKANALYZERCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTNETWORKANALYZERCONFIGURATIONSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListNetworkAnalyzerConfigurationsResponse;

class ListNetworkAnalyzerConfigurationsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListNetworkAnalyzerConfigurationsResponsePrivate(ListNetworkAnalyzerConfigurationsResponse * const q);

    void parseListNetworkAnalyzerConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworkAnalyzerConfigurationsResponse)
    Q_DISABLE_COPY(ListNetworkAnalyzerConfigurationsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
