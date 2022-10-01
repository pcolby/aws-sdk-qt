// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINDETAILREQUEST_H
#define QTAWS_GETDOMAINDETAILREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainDetailRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetDomainDetailRequest : public Route53DomainsRequest {

public:
    GetDomainDetailRequest(const GetDomainDetailRequest &other);
    GetDomainDetailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainDetailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
