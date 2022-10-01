// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYRESPONSE_P_H
#define QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartSmartHomeApplianceDiscoveryResponse;

class StartSmartHomeApplianceDiscoveryResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit StartSmartHomeApplianceDiscoveryResponsePrivate(StartSmartHomeApplianceDiscoveryResponse * const q);

    void parseStartSmartHomeApplianceDiscoveryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSmartHomeApplianceDiscoveryResponse)
    Q_DISABLE_COPY(StartSmartHomeApplianceDiscoveryResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
