// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANRESOURCESRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGPLANRESOURCESRESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlanResourcesResponse;

class DescribeScalingPlanResourcesResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit DescribeScalingPlanResourcesResponsePrivate(DescribeScalingPlanResourcesResponse * const q);

    void parseDescribeScalingPlanResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPlanResourcesResponse)
    Q_DISABLE_COPY(DescribeScalingPlanResourcesResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
