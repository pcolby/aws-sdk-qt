// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILINGGROUPREQUEST_P_H
#define QTAWS_UPDATEPROFILINGGROUPREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "updateprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class UpdateProfilingGroupRequest;

class UpdateProfilingGroupRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    UpdateProfilingGroupRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   UpdateProfilingGroupRequest * const q);
    UpdateProfilingGroupRequestPrivate(const UpdateProfilingGroupRequestPrivate &other,
                                   UpdateProfilingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
