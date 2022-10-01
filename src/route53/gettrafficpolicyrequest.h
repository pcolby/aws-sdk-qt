// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYREQUEST_H
#define QTAWS_GETTRAFFICPOLICYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyRequestPrivate;

class QTAWSROUTE53_EXPORT GetTrafficPolicyRequest : public Route53Request {

public:
    GetTrafficPolicyRequest(const GetTrafficPolicyRequest &other);
    GetTrafficPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
