// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINAVAILABILITYREQUEST_H
#define QTAWS_CHECKDOMAINAVAILABILITYREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainAvailabilityRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT CheckDomainAvailabilityRequest : public Route53DomainsRequest {

public:
    CheckDomainAvailabilityRequest(const CheckDomainAvailabilityRequest &other);
    CheckDomainAvailabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDomainAvailabilityRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
