// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTRESPONSE_P_H
#define QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainToAnotherAwsAccountResponse;

class TransferDomainToAnotherAwsAccountResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit TransferDomainToAnotherAwsAccountResponsePrivate(TransferDomainToAnotherAwsAccountResponse * const q);

    void parseTransferDomainToAnotherAwsAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferDomainToAnotherAwsAccountResponse)
    Q_DISABLE_COPY(TransferDomainToAnotherAwsAccountResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
