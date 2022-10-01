// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINAUTORENEWRESPONSE_P_H
#define QTAWS_DISABLEDOMAINAUTORENEWRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainAutoRenewResponse;

class DisableDomainAutoRenewResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit DisableDomainAutoRenewResponsePrivate(DisableDomainAutoRenewResponse * const q);

    void parseDisableDomainAutoRenewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableDomainAutoRenewResponse)
    Q_DISABLE_COPY(DisableDomainAutoRenewResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
