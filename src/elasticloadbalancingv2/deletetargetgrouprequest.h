// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETGROUPREQUEST_H
#define QTAWS_DELETETARGETGROUPREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteTargetGroupRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeleteTargetGroupRequest : public ElasticLoadBalancingv2Request {

public:
    DeleteTargetGroupRequest(const DeleteTargetGroupRequest &other);
    DeleteTargetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
