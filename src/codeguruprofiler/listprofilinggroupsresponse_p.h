// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILINGGROUPSRESPONSE_P_H
#define QTAWS_LISTPROFILINGGROUPSRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfilingGroupsResponse;

class ListProfilingGroupsResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit ListProfilingGroupsResponsePrivate(ListProfilingGroupsResponse * const q);

    void parseListProfilingGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProfilingGroupsResponse)
    Q_DISABLE_COPY(ListProfilingGroupsResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
