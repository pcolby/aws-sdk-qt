// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWARMPOOLRESPONSE_P_H
#define QTAWS_DESCRIBEWARMPOOLRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeWarmPoolResponse;

class DescribeWarmPoolResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeWarmPoolResponsePrivate(DescribeWarmPoolResponse * const q);

    void parseDescribeWarmPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWarmPoolResponse)
    Q_DISABLE_COPY(DescribeWarmPoolResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
