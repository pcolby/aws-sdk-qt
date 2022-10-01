// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCEREQUEST_H
#define QTAWS_GETTRAFFICPOLICYINSTANCEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceRequestPrivate;

class QTAWSROUTE53_EXPORT GetTrafficPolicyInstanceRequest : public Route53Request {

public:
    GetTrafficPolicyInstanceRequest(const GetTrafficPolicyInstanceRequest &other);
    GetTrafficPolicyInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
