// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDOMAINREQUEST_H
#define QTAWS_REGISTERDOMAINREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class RegisterDomainRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT RegisterDomainRequest : public Route53DomainsRequest {

public:
    RegisterDomainRequest(const RegisterDomainRequest &other);
    RegisterDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDomainRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
