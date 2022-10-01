// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYINSTANCEREQUEST_H
#define QTAWS_CREATETRAFFICPOLICYINSTANCEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyInstanceRequestPrivate;

class QTAWSROUTE53_EXPORT CreateTrafficPolicyInstanceRequest : public Route53Request {

public:
    CreateTrafficPolicyInstanceRequest(const CreateTrafficPolicyInstanceRequest &other);
    CreateTrafficPolicyInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
