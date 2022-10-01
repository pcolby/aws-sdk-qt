// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPATTRIBUTESRESPONSE_H
#define QTAWS_MODIFYTARGETGROUPATTRIBUTESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifytargetgroupattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyTargetGroupAttributesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyTargetGroupAttributesResponse(const ModifyTargetGroupAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTargetGroupAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTargetGroupAttributesResponse)
    Q_DISABLE_COPY(ModifyTargetGroupAttributesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
