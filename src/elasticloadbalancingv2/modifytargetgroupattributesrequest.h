// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPATTRIBUTESREQUEST_H
#define QTAWS_MODIFYTARGETGROUPATTRIBUTESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyTargetGroupAttributesRequest : public ElasticLoadBalancingv2Request {

public:
    ModifyTargetGroupAttributesRequest(const ModifyTargetGroupAttributesRequest &other);
    ModifyTargetGroupAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTargetGroupAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
