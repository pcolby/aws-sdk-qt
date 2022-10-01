// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDETAILRESPONSE_P_H
#define QTAWS_GETDOMAINDETAILRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainDetailResponse;

class GetDomainDetailResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit GetDomainDetailResponsePrivate(GetDomainDetailResponse * const q);

    void parseGetDomainDetailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainDetailResponse)
    Q_DISABLE_COPY(GetDomainDetailResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
