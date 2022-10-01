// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINAVAILABILITYRESPONSE_P_H
#define QTAWS_CHECKDOMAINAVAILABILITYRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainAvailabilityResponse;

class CheckDomainAvailabilityResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit CheckDomainAvailabilityResponsePrivate(CheckDomainAvailabilityResponse * const q);

    void parseCheckDomainAvailabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckDomainAvailabilityResponse)
    Q_DISABLE_COPY(CheckDomainAvailabilityResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
