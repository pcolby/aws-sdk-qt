// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETGROUPRESPONSE_H
#define QTAWS_DELETETARGETGROUPRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "deletetargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteTargetGroupResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeleteTargetGroupResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DeleteTargetGroupResponse(const DeleteTargetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTargetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTargetGroupResponse)
    Q_DISABLE_COPY(DeleteTargetGroupResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
