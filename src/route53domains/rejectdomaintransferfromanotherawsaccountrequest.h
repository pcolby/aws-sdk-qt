// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_H
#define QTAWS_REJECTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class RejectDomainTransferFromAnotherAwsAccountRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT RejectDomainTransferFromAnotherAwsAccountRequest : public Route53DomainsRequest {

public:
    RejectDomainTransferFromAnotherAwsAccountRequest(const RejectDomainTransferFromAnotherAwsAccountRequest &other);
    RejectDomainTransferFromAnotherAwsAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectDomainTransferFromAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
