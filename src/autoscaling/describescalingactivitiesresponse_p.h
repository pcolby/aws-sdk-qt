// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGACTIVITIESRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGACTIVITIESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingActivitiesResponse;

class DescribeScalingActivitiesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeScalingActivitiesResponsePrivate(DescribeScalingActivitiesResponse * const q);

    void parseDescribeScalingActivitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingActivitiesResponse)
    Q_DISABLE_COPY(DescribeScalingActivitiesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
