// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYRESPONSE_H
#define QTAWS_STARTSMARTHOMEAPPLIANCEDISCOVERYRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "startsmarthomeappliancediscoveryrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartSmartHomeApplianceDiscoveryResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT StartSmartHomeApplianceDiscoveryResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    StartSmartHomeApplianceDiscoveryResponse(const StartSmartHomeApplianceDiscoveryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSmartHomeApplianceDiscoveryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSmartHomeApplianceDiscoveryResponse)
    Q_DISABLE_COPY(StartSmartHomeApplianceDiscoveryResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
