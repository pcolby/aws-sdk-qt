// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESENDCONTACTREACHABILITYEMAILREQUEST_P_H
#define QTAWS_RESENDCONTACTREACHABILITYEMAILREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "resendcontactreachabilityemailrequest.h"

namespace QtAws {
namespace Route53Domains {

class ResendContactReachabilityEmailRequest;

class ResendContactReachabilityEmailRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ResendContactReachabilityEmailRequestPrivate(const Route53DomainsRequest::Action action,
                                   ResendContactReachabilityEmailRequest * const q);
    ResendContactReachabilityEmailRequestPrivate(const ResendContactReachabilityEmailRequestPrivate &other,
                                   ResendContactReachabilityEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResendContactReachabilityEmailRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
