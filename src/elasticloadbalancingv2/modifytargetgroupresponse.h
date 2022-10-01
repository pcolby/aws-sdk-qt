// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPRESPONSE_H
#define QTAWS_MODIFYTARGETGROUPRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifytargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyTargetGroupResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyTargetGroupResponse(const ModifyTargetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTargetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTargetGroupResponse)
    Q_DISABLE_COPY(ModifyTargetGroupResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
