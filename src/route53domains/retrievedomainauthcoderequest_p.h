// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRIEVEDOMAINAUTHCODEREQUEST_P_H
#define QTAWS_RETRIEVEDOMAINAUTHCODEREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "retrievedomainauthcoderequest.h"

namespace QtAws {
namespace Route53Domains {

class RetrieveDomainAuthCodeRequest;

class RetrieveDomainAuthCodeRequestPrivate : public Route53DomainsRequestPrivate {

public:
    RetrieveDomainAuthCodeRequestPrivate(const Route53DomainsRequest::Action action,
                                   RetrieveDomainAuthCodeRequest * const q);
    RetrieveDomainAuthCodeRequestPrivate(const RetrieveDomainAuthCodeRequestPrivate &other,
                                   RetrieveDomainAuthCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetrieveDomainAuthCodeRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
