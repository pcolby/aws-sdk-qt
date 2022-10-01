// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAVAILABILITYMONITORTESTREQUEST_P_H
#define QTAWS_STARTAVAILABILITYMONITORTESTREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "startavailabilitymonitortestrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartAvailabilityMonitorTestRequest;

class StartAvailabilityMonitorTestRequestPrivate : public StorageGatewayRequestPrivate {

public:
    StartAvailabilityMonitorTestRequestPrivate(const StorageGatewayRequest::Action action,
                                   StartAvailabilityMonitorTestRequest * const q);
    StartAvailabilityMonitorTestRequestPrivate(const StartAvailabilityMonitorTestRequestPrivate &other,
                                   StartAvailabilityMonitorTestRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAvailabilityMonitorTestRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
