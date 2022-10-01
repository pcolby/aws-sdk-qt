// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKANALYZERCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATENETWORKANALYZERCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatenetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateNetworkAnalyzerConfigurationRequest;

class UpdateNetworkAnalyzerConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateNetworkAnalyzerConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateNetworkAnalyzerConfigurationRequest * const q);
    UpdateNetworkAnalyzerConfigurationRequestPrivate(const UpdateNetworkAnalyzerConfigurationRequestPrivate &other,
                                   UpdateNetworkAnalyzerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
