// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYREQUEST_P_H
#define QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "createappcookiestickinesspolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateAppCookieStickinessPolicyRequest;

class CreateAppCookieStickinessPolicyRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    CreateAppCookieStickinessPolicyRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   CreateAppCookieStickinessPolicyRequest * const q);
    CreateAppCookieStickinessPolicyRequestPrivate(const CreateAppCookieStickinessPolicyRequestPrivate &other,
                                   CreateAppCookieStickinessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppCookieStickinessPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
