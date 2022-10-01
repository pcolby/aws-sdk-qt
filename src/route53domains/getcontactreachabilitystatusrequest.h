// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_H
#define QTAWS_GETCONTACTREACHABILITYSTATUSREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class GetContactReachabilityStatusRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT GetContactReachabilityStatusRequest : public Route53DomainsRequest {

public:
    GetContactReachabilityStatusRequest(const GetContactReachabilityStatusRequest &other);
    GetContactReachabilityStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactReachabilityStatusRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
