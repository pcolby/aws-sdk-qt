// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKSRESPONSE_P_H
#define QTAWS_DESCRIBELIFECYCLEHOOKSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHooksResponse;

class DescribeLifecycleHooksResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeLifecycleHooksResponsePrivate(DescribeLifecycleHooksResponse * const q);

    void parseDescribeLifecycleHooksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleHooksResponse)
    Q_DISABLE_COPY(DescribeLifecycleHooksResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
