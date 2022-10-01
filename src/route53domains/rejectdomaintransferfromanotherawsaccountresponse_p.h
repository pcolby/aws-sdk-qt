// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_P_H
#define QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class RejectDomainTransferFromAnotherAwsAccountResponse;

class RejectDomainTransferFromAnotherAwsAccountResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit RejectDomainTransferFromAnotherAwsAccountResponsePrivate(RejectDomainTransferFromAnotherAwsAccountResponse * const q);

    void parseRejectDomainTransferFromAnotherAwsAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectDomainTransferFromAnotherAwsAccountResponse)
    Q_DISABLE_COPY(RejectDomainTransferFromAnotherAwsAccountResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
