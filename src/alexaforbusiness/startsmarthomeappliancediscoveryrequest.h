// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYREQUEST_H
#define QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartSmartHomeApplianceDiscoveryRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT StartSmartHomeApplianceDiscoveryRequest : public AlexaForBusinessRequest {

public:
    StartSmartHomeApplianceDiscoveryRequest(const StartSmartHomeApplianceDiscoveryRequest &other);
    StartSmartHomeApplianceDiscoveryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSmartHomeApplianceDiscoveryRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
