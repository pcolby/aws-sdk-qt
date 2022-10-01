// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPROCESSTYPESRESPONSE_P_H
#define QTAWS_DESCRIBESCALINGPROCESSTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingProcessTypesResponse;

class DescribeScalingProcessTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeScalingProcessTypesResponsePrivate(DescribeScalingProcessTypesResponse * const q);

    void parseDescribeScalingProcessTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScalingProcessTypesResponse)
    Q_DISABLE_COPY(DescribeScalingProcessTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
