// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILINGGROUPREQUEST_P_H
#define QTAWS_DESCRIBEPROFILINGGROUPREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "describeprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DescribeProfilingGroupRequest;

class DescribeProfilingGroupRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    DescribeProfilingGroupRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   DescribeProfilingGroupRequest * const q);
    DescribeProfilingGroupRequestPrivate(const DescribeProfilingGroupRequestPrivate &other,
                                   DescribeProfilingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
