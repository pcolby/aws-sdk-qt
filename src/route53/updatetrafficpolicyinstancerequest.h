// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRAFFICPOLICYINSTANCEREQUEST_H
#define QTAWS_UPDATETRAFFICPOLICYINSTANCEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class UpdateTrafficPolicyInstanceRequestPrivate;

class QTAWSROUTE53_EXPORT UpdateTrafficPolicyInstanceRequest : public Route53Request {

public:
    UpdateTrafficPolicyInstanceRequest(const UpdateTrafficPolicyInstanceRequest &other);
    UpdateTrafficPolicyInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
