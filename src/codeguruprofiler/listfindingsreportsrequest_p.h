// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREPORTSREQUEST_P_H
#define QTAWS_LISTFINDINGSREPORTSREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "listfindingsreportsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListFindingsReportsRequest;

class ListFindingsReportsRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    ListFindingsReportsRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   ListFindingsReportsRequest * const q);
    ListFindingsReportsRequestPrivate(const ListFindingsReportsRequestPrivate &other,
                                   ListFindingsReportsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingsReportsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
