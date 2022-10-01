// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_H
#define QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTRESPONSE_H

#include "route53domainsresponse.h"
#include "rejectdomaintransferfromanotherawsaccountrequest.h"

namespace QtAws {
namespace Route53Domains {

class RejectDomainTransferFromAnotherAwsAccountResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT RejectDomainTransferFromAnotherAwsAccountResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    RejectDomainTransferFromAnotherAwsAccountResponse(const RejectDomainTransferFromAnotherAwsAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectDomainTransferFromAnotherAwsAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectDomainTransferFromAnotherAwsAccountResponse)
    Q_DISABLE_COPY(RejectDomainTransferFromAnotherAwsAccountResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
