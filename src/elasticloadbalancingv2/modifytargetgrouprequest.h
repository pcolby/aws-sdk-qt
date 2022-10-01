// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPREQUEST_H
#define QTAWS_MODIFYTARGETGROUPREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyTargetGroupRequest : public ElasticLoadBalancingv2Request {

public:
    ModifyTargetGroupRequest(const ModifyTargetGroupRequest &other);
    ModifyTargetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
