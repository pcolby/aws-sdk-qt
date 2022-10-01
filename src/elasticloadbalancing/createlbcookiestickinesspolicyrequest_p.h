// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELBCOOKIESTICKINESSPOLICYREQUEST_P_H
#define QTAWS_CREATELBCOOKIESTICKINESSPOLICYREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "createlbcookiestickinesspolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLBCookieStickinessPolicyRequest;

class CreateLBCookieStickinessPolicyRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    CreateLBCookieStickinessPolicyRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   CreateLBCookieStickinessPolicyRequest * const q);
    CreateLBCookieStickinessPolicyRequestPrivate(const CreateLBCookieStickinessPolicyRequestPrivate &other,
                                   CreateLBCookieStickinessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLBCookieStickinessPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
