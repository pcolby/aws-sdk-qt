// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYREQUEST_P_H
#define QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "startsmarthomeappliancediscoveryrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartSmartHomeApplianceDiscoveryRequest;

class StartSmartHomeApplianceDiscoveryRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    StartSmartHomeApplianceDiscoveryRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   StartSmartHomeApplianceDiscoveryRequest * const q);
    StartSmartHomeApplianceDiscoveryRequestPrivate(const StartSmartHomeApplianceDiscoveryRequestPrivate &other,
                                   StartSmartHomeApplianceDiscoveryRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSmartHomeApplianceDiscoveryRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
