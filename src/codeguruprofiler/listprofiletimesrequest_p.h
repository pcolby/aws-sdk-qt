// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILETIMESREQUEST_P_H
#define QTAWS_LISTPROFILETIMESREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "listprofiletimesrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfileTimesRequest;

class ListProfileTimesRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    ListProfileTimesRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   ListProfileTimesRequest * const q);
    ListProfileTimesRequestPrivate(const ListProfileTimesRequestPrivate &other,
                                   ListProfileTimesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfileTimesRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
