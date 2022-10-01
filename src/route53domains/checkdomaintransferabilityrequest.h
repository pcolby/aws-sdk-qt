// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINTRANSFERABILITYREQUEST_H
#define QTAWS_CHECKDOMAINTRANSFERABILITYREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainTransferabilityRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT CheckDomainTransferabilityRequest : public Route53DomainsRequest {

public:
    CheckDomainTransferabilityRequest(const CheckDomainTransferabilityRequest &other);
    CheckDomainTransferabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDomainTransferabilityRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
