// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONTACTREACHABILITYEMAILREQUEST_H
#define QTAWS_RESENDCONTACTREACHABILITYEMAILREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class ResendContactReachabilityEmailRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT ResendContactReachabilityEmailRequest : public Route53DomainsRequest {

public:
    ResendContactReachabilityEmailRequest(const ResendContactReachabilityEmailRequest &other);
    ResendContactReachabilityEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResendContactReachabilityEmailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
