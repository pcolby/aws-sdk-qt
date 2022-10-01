// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINAUTORENEWRESPONSE_P_H
#define QTAWS_ENABLEDOMAINAUTORENEWRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainAutoRenewResponse;

class EnableDomainAutoRenewResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit EnableDomainAutoRenewResponsePrivate(EnableDomainAutoRenewResponse * const q);

    void parseEnableDomainAutoRenewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableDomainAutoRenewResponse)
    Q_DISABLE_COPY(EnableDomainAutoRenewResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
