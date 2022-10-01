// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETARGETGROUPRESPONSE_H
#define QTAWS_CREATETARGETGROUPRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "createtargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateTargetGroupResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateTargetGroupResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    CreateTargetGroupResponse(const CreateTargetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTargetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTargetGroupResponse)
    Q_DISABLE_COPY(CreateTargetGroupResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
