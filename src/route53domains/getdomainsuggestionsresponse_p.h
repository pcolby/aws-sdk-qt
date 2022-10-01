// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSUGGESTIONSRESPONSE_P_H
#define QTAWS_GETDOMAINSUGGESTIONSRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainSuggestionsResponse;

class GetDomainSuggestionsResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit GetDomainSuggestionsResponsePrivate(GetDomainSuggestionsResponse * const q);

    void parseGetDomainSuggestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainSuggestionsResponse)
    Q_DISABLE_COPY(GetDomainSuggestionsResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
