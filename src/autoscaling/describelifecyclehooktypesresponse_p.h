// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKTYPESRESPONSE_P_H
#define QTAWS_DESCRIBELIFECYCLEHOOKTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHookTypesResponse;

class DescribeLifecycleHookTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeLifecycleHookTypesResponsePrivate(DescribeLifecycleHookTypesResponse * const q);

    void parseDescribeLifecycleHookTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleHookTypesResponse)
    Q_DISABLE_COPY(DescribeLifecycleHookTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
