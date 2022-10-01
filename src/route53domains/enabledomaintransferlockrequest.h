// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINTRANSFERLOCKREQUEST_H
#define QTAWS_ENABLEDOMAINTRANSFERLOCKREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainTransferLockRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT EnableDomainTransferLockRequest : public Route53DomainsRequest {

public:
    EnableDomainTransferLockRequest(const EnableDomainTransferLockRequest &other);
    EnableDomainTransferLockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDomainTransferLockRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
