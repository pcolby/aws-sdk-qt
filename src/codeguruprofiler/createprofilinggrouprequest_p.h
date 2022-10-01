// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILINGGROUPREQUEST_P_H
#define QTAWS_CREATEPROFILINGGROUPREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "createprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CreateProfilingGroupRequest;

class CreateProfilingGroupRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    CreateProfilingGroupRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   CreateProfilingGroupRequest * const q);
    CreateProfilingGroupRequestPrivate(const CreateProfilingGroupRequestPrivate &other,
                                   CreateProfilingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
