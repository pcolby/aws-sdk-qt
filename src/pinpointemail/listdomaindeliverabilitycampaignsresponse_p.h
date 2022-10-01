// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_P_H
#define QTAWS_LISTDOMAINDELIVERABILITYCAMPAIGNSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListDomainDeliverabilityCampaignsResponse;

class ListDomainDeliverabilityCampaignsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit ListDomainDeliverabilityCampaignsResponsePrivate(ListDomainDeliverabilityCampaignsResponse * const q);

    void parseListDomainDeliverabilityCampaignsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainDeliverabilityCampaignsResponse)
    Q_DISABLE_COPY(ListDomainDeliverabilityCampaignsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
