// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWDOMAINRESPONSE_P_H
#define QTAWS_RENEWDOMAINRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class RenewDomainResponse;

class RenewDomainResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit RenewDomainResponsePrivate(RenewDomainResponse * const q);

    void parseRenewDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RenewDomainResponse)
    Q_DISABLE_COPY(RenewDomainResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
