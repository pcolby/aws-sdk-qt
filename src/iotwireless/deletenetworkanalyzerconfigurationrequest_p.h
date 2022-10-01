// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKANALYZERCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETENETWORKANALYZERCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletenetworkanalyzerconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteNetworkAnalyzerConfigurationRequest;

class DeleteNetworkAnalyzerConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteNetworkAnalyzerConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteNetworkAnalyzerConfigurationRequest * const q);
    DeleteNetworkAnalyzerConfigurationRequestPrivate(const DeleteNetworkAnalyzerConfigurationRequestPrivate &other,
                                   DeleteNetworkAnalyzerConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAnalyzerConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
