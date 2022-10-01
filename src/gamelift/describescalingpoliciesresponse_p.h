// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGPOLICIESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeScalingPoliciesResponse;

class DescribeScalingPoliciesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeScalingPoliciesResponsePrivate(DescribeScalingPoliciesResponse * const q);

    void parseDescribeScalingPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPoliciesResponse)
    Q_DISABLE_COPY(DescribeScalingPoliciesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
