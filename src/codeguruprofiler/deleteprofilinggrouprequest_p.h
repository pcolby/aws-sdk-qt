// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILINGGROUPREQUEST_P_H
#define QTAWS_DELETEPROFILINGGROUPREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "deleteprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DeleteProfilingGroupRequest;

class DeleteProfilingGroupRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    DeleteProfilingGroupRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   DeleteProfilingGroupRequest * const q);
    DeleteProfilingGroupRequestPrivate(const DeleteProfilingGroupRequestPrivate &other,
                                   DeleteProfilingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
