// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_P_H
#define QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class AcceptDomainTransferFromAnotherAwsAccountResponse;

class AcceptDomainTransferFromAnotherAwsAccountResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit AcceptDomainTransferFromAnotherAwsAccountResponsePrivate(AcceptDomainTransferFromAnotherAwsAccountResponse * const q);

    void parseAcceptDomainTransferFromAnotherAwsAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptDomainTransferFromAnotherAwsAccountResponse)
    Q_DISABLE_COPY(AcceptDomainTransferFromAnotherAwsAccountResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
