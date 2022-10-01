// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILINGGROUPRESPONSE_P_H
#define QTAWS_CREATEPROFILINGGROUPRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CreateProfilingGroupResponse;

class CreateProfilingGroupResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit CreateProfilingGroupResponsePrivate(CreateProfilingGroupResponse * const q);

    void parseCreateProfilingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProfilingGroupResponse)
    Q_DISABLE_COPY(CreateProfilingGroupResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
