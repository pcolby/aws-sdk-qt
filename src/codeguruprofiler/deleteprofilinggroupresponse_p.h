// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILINGGROUPRESPONSE_P_H
#define QTAWS_DELETEPROFILINGGROUPRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DeleteProfilingGroupResponse;

class DeleteProfilingGroupResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit DeleteProfilingGroupResponsePrivate(DeleteProfilingGroupResponse * const q);

    void parseDeleteProfilingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfilingGroupResponse)
    Q_DISABLE_COPY(DeleteProfilingGroupResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
