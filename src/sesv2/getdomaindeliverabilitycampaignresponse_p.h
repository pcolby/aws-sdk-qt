// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_P_H
#define QTAWS_GETDOMAINDELIVERABILITYCAMPAIGNRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetDomainDeliverabilityCampaignResponse;

class GetDomainDeliverabilityCampaignResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetDomainDeliverabilityCampaignResponsePrivate(GetDomainDeliverabilityCampaignResponse * const q);

    void parseGetDomainDeliverabilityCampaignResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainDeliverabilityCampaignResponse)
    Q_DISABLE_COPY(GetDomainDeliverabilityCampaignResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
