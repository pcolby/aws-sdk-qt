// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANSRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGPLANSRESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlansResponse;

class DescribeScalingPlansResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit DescribeScalingPlansResponsePrivate(DescribeScalingPlansResponse * const q);

    void parseDescribeScalingPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPlansResponse)
    Q_DISABLE_COPY(DescribeScalingPlansResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
