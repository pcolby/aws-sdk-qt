// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILINGGROUPRESPONSE_P_H
#define QTAWS_UPDATEPROFILINGGROUPRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class UpdateProfilingGroupResponse;

class UpdateProfilingGroupResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit UpdateProfilingGroupResponsePrivate(UpdateProfilingGroupResponse * const q);

    void parseUpdateProfilingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProfilingGroupResponse)
    Q_DISABLE_COPY(UpdateProfilingGroupResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
