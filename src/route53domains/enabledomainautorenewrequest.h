// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDOMAINAUTORENEWREQUEST_H
#define QTAWS_ENABLEDOMAINAUTORENEWREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class EnableDomainAutoRenewRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT EnableDomainAutoRenewRequest : public Route53DomainsRequest {

public:
    EnableDomainAutoRenewRequest(const EnableDomainAutoRenewRequest &other);
    EnableDomainAutoRenewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDomainAutoRenewRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
