// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADJUSTMENTTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEADJUSTMENTTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAdjustmentTypesResponse;

class DescribeAdjustmentTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeAdjustmentTypesResponsePrivate(DescribeAdjustmentTypesResponse * const q);

    void parseDescribeAdjustmentTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAdjustmentTypesResponse)
    Q_DISABLE_COPY(DescribeAdjustmentTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
