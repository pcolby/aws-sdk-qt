// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETARGETGROUPREQUEST_H
#define QTAWS_CREATETARGETGROUPREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateTargetGroupRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateTargetGroupRequest : public ElasticLoadBalancingv2Request {

public:
    CreateTargetGroupRequest(const CreateTargetGroupRequest &other);
    CreateTargetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
