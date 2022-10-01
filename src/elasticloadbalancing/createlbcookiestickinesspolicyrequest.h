// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELBCOOKIESTICKINESSPOLICYREQUEST_H
#define QTAWS_CREATELBCOOKIESTICKINESSPOLICYREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLBCookieStickinessPolicyRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateLBCookieStickinessPolicyRequest : public ElasticLoadBalancingRequest {

public:
    CreateLBCookieStickinessPolicyRequest(const CreateLBCookieStickinessPolicyRequest &other);
    CreateLBCookieStickinessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLBCookieStickinessPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
