// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKANALYZERCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTNETWORKANALYZERCONFIGURATIONSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listnetworkanalyzerconfigurationsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListNetworkAnalyzerConfigurationsRequest;

class ListNetworkAnalyzerConfigurationsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListNetworkAnalyzerConfigurationsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListNetworkAnalyzerConfigurationsRequest * const q);
    ListNetworkAnalyzerConfigurationsRequestPrivate(const ListNetworkAnalyzerConfigurationsRequestPrivate &other,
                                   ListNetworkAnalyzerConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworkAnalyzerConfigurationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
