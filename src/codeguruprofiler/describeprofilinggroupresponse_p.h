// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILINGGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEPROFILINGGROUPRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DescribeProfilingGroupResponse;

class DescribeProfilingGroupResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit DescribeProfilingGroupResponsePrivate(DescribeProfilingGroupResponse * const q);

    void parseDescribeProfilingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProfilingGroupResponse)
    Q_DISABLE_COPY(DescribeProfilingGroupResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
