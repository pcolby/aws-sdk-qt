// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETSREQUEST_H
#define QTAWS_REGISTERTARGETSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RegisterTargetsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT RegisterTargetsRequest : public ElasticLoadBalancingv2Request {

public:
    RegisterTargetsRequest(const RegisterTargetsRequest &other);
    RegisterTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTargetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
