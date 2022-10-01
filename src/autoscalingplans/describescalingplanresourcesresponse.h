// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANRESOURCESRESPONSE_H
#define QTAWS_DESCRIBESCALINGPLANRESOURCESRESPONSE_H

#include "autoscalingplansresponse.h"
#include "describescalingplanresourcesrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlanResourcesResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT DescribeScalingPlanResourcesResponse : public AutoScalingPlansResponse {
    Q_OBJECT

public:
    DescribeScalingPlanResourcesResponse(const DescribeScalingPlanResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingPlanResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPlanResourcesResponse)
    Q_DISABLE_COPY(DescribeScalingPlanResourcesResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
