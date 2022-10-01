// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRAFFICPOLICYINSTANCEREQUEST_H
#define QTAWS_DELETETRAFFICPOLICYINSTANCEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteTrafficPolicyInstanceRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteTrafficPolicyInstanceRequest : public Route53Request {

public:
    DeleteTrafficPolicyInstanceRequest(const DeleteTrafficPolicyInstanceRequest &other);
    DeleteTrafficPolicyInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrafficPolicyInstanceRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
