// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILINGGROUPSREQUEST_P_H
#define QTAWS_LISTPROFILINGGROUPSREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "listprofilinggroupsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfilingGroupsRequest;

class ListProfilingGroupsRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    ListProfilingGroupsRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   ListProfilingGroupsRequest * const q);
    ListProfilingGroupsRequestPrivate(const ListProfilingGroupsRequestPrivate &other,
                                   ListProfilingGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfilingGroupsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
