// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_H
#define QTAWS_ACCEPTDOMAINTRANSFERFROMANOTHERAWSACCOUNTREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class AcceptDomainTransferFromAnotherAwsAccountRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT AcceptDomainTransferFromAnotherAwsAccountRequest : public Route53DomainsRequest {

public:
    AcceptDomainTransferFromAnotherAwsAccountRequest(const AcceptDomainTransferFromAnotherAwsAccountRequest &other);
    AcceptDomainTransferFromAnotherAwsAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptDomainTransferFromAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
