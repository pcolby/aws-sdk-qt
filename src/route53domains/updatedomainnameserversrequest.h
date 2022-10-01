// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMESERVERSREQUEST_H
#define QTAWS_UPDATEDOMAINNAMESERVERSREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainNameserversRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainNameserversRequest : public Route53DomainsRequest {

public:
    UpdateDomainNameserversRequest(const UpdateDomainNameserversRequest &other);
    UpdateDomainNameserversRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainNameserversRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
