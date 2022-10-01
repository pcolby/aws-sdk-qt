// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEDOMAINAUTHCODEREQUEST_H
#define QTAWS_RETRIEVEDOMAINAUTHCODEREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class RetrieveDomainAuthCodeRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT RetrieveDomainAuthCodeRequest : public Route53DomainsRequest {

public:
    RetrieveDomainAuthCodeRequest(const RetrieveDomainAuthCodeRequest &other);
    RetrieveDomainAuthCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetrieveDomainAuthCodeRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
