// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTRESPONSE_H
#define QTAWS_TRANSFERDOMAINTOANOTHERAWSACCOUNTRESPONSE_H

#include "route53domainsresponse.h"
#include "transferdomaintoanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class TransferDomainToAnotherAwsAccountResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT TransferDomainToAnotherAwsAccountResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    TransferDomainToAnotherAwsAccountResponse(const TransferDomainToAnotherAwsAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TransferDomainToAnotherAwsAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferDomainToAnotherAwsAccountResponse)
    Q_DISABLE_COPY(TransferDomainToAnotherAwsAccountResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
