// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMESERVERSRESPONSE_P_H
#define QTAWS_UPDATEDOMAINNAMESERVERSRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainNameserversResponse;

class UpdateDomainNameserversResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit UpdateDomainNameserversResponsePrivate(UpdateDomainNameserversResponse * const q);

    void parseUpdateDomainNameserversResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameserversResponse)
    Q_DISABLE_COPY(UpdateDomainNameserversResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
