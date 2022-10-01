// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_H
#define QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_H

#include "route53domainsresponse.h"
#include "acceptdomaintransferfromanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class AcceptDomainTransferFromAnotherAwsAccountResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT AcceptDomainTransferFromAnotherAwsAccountResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    AcceptDomainTransferFromAnotherAwsAccountResponse(const AcceptDomainTransferFromAnotherAwsAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptDomainTransferFromAnotherAwsAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptDomainTransferFromAnotherAwsAccountResponse)
    Q_DISABLE_COPY(AcceptDomainTransferFromAnotherAwsAccountResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
