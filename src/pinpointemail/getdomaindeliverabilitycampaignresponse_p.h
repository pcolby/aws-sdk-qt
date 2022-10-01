// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_P_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainDeliverabilityCampaignResponse;

class GetDomainDeliverabilityCampaignResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit GetDomainDeliverabilityCampaignResponsePrivate(GetDomainDeliverabilityCampaignResponse * const q);

    void parseGetDomainDeliverabilityCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainDeliverabilityCampaignResponse)
    Q_DISABLE_COPY(GetDomainDeliverabilityCampaignResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
