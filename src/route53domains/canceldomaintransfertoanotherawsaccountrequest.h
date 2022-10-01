// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTREQUEST_H
#define QTAWS_CANCELDOMAINTRANSFERTOANOTHERAWSACCOUNTREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class CancelDomainTransferToAnotherAwsAccountRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT CancelDomainTransferToAnotherAwsAccountRequest : public Route53DomainsRequest {

public:
    CancelDomainTransferToAnotherAwsAccountRequest(const CancelDomainTransferToAnotherAwsAccountRequest &other);
    CancelDomainTransferToAnotherAwsAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDomainTransferToAnotherAwsAccountRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
