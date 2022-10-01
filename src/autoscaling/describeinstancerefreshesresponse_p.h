// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREFRESHESRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEREFRESHESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeInstanceRefreshesResponse;

class DescribeInstanceRefreshesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeInstanceRefreshesResponsePrivate(DescribeInstanceRefreshesResponse * const q);

    void parseDescribeInstanceRefreshesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceRefreshesResponse)
    Q_DISABLE_COPY(DescribeInstanceRefreshesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
