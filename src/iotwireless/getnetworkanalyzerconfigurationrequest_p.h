// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKANALYZERCONFIGURATIONREQUEST_P_H
#define QTAWS_GETNETWORKANALYZERCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getnetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetNetworkAnalyzerConfigurationRequest;

class GetNetworkAnalyzerConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetNetworkAnalyzerConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetNetworkAnalyzerConfigurationRequest * const q);
    GetNetworkAnalyzerConfigurationRequestPrivate(const GetNetworkAnalyzerConfigurationRequestPrivate &other,
                                   GetNetworkAnalyzerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
