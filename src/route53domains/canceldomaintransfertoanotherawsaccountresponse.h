// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTRESPONSE_H
#define QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTRESPONSE_H

#include "route53domainsresponse.h"
#include "canceldomaintransfertoanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class CancelDomainTransferToAnotherAwsAccountResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT CancelDomainTransferToAnotherAwsAccountResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    CancelDomainTransferToAnotherAwsAccountResponse(const CancelDomainTransferToAnotherAwsAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelDomainTransferToAnotherAwsAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDomainTransferToAnotherAwsAccountResponse)
    Q_DISABLE_COPY(CancelDomainTransferToAnotherAwsAccountResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
