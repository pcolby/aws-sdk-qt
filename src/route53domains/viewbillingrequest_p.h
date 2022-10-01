// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VIEWBILLINGREQUEST_P_H
#define QTAWS_VIEWBILLINGREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "viewbillingrequest.h"

namespace QtAws {
namespace Route53Domains {

class ViewBillingRequest;

class ViewBillingRequestPrivate : public Route53DomainsRequestPrivate {

public:
    ViewBillingRequestPrivate(const Route53DomainsRequest::Action action,
                                   ViewBillingRequest * const q);
    ViewBillingRequestPrivate(const ViewBillingRequestPrivate &other,
                                   ViewBillingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ViewBillingRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
