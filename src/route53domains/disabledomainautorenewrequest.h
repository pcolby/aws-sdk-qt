// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDOMAINAUTORENEWREQUEST_H
#define QTAWS_DISABLEDOMAINAUTORENEWREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class DisableDomainAutoRenewRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT DisableDomainAutoRenewRequest : public Route53DomainsRequest {

public:
    DisableDomainAutoRenewRequest(const DisableDomainAutoRenewRequest &other);
    DisableDomainAutoRenewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDomainAutoRenewRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
