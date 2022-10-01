// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYREQUEST_H
#define QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateAppCookieStickinessPolicyRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateAppCookieStickinessPolicyRequest : public ElasticLoadBalancingRequest {

public:
    CreateAppCookieStickinessPolicyRequest(const CreateAppCookieStickinessPolicyRequest &other);
    CreateAppCookieStickinessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppCookieStickinessPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
