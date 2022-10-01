// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTRESPONSE_P_H
#define QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class CancelDomainTransferToAnotherAwsAccountResponse;

class CancelDomainTransferToAnotherAwsAccountResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit CancelDomainTransferToAnotherAwsAccountResponsePrivate(CancelDomainTransferToAnotherAwsAccountResponse * const q);

    void parseCancelDomainTransferToAnotherAwsAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelDomainTransferToAnotherAwsAccountResponse)
    Q_DISABLE_COPY(CancelDomainTransferToAnotherAwsAccountResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
