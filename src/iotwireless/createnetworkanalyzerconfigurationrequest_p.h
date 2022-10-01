// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKANALYZERCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATENETWORKANALYZERCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createnetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateNetworkAnalyzerConfigurationRequest;

class CreateNetworkAnalyzerConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateNetworkAnalyzerConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateNetworkAnalyzerConfigurationRequest * const q);
    CreateNetworkAnalyzerConfigurationRequestPrivate(const CreateNetworkAnalyzerConfigurationRequestPrivate &other,
                                   CreateNetworkAnalyzerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
