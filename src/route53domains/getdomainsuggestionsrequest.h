// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSUGGESTIONSREQUEST_H
#define QTAWS_GETDOMAINSUGGESTIONSREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetDomainSuggestionsRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetDomainSuggestionsRequest : public Route53DomainsRequest {

public:
    GetDomainSuggestionsRequest(const GetDomainSuggestionsRequest &other);
    GetDomainSuggestionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainSuggestionsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
