// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINRESPONSE_P_H
#define QTAWS_TRANSFERDOMAINRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainResponse;

class TransferDomainResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit TransferDomainResponsePrivate(TransferDomainResponse * const q);

    void parseTransferDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferDomainResponse)
    Q_DISABLE_COPY(TransferDomainResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
