// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTAGENTPROFILERESPONSE_P_H
#define QTAWS_POSTAGENTPROFILERESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PostAgentProfileResponse;

class PostAgentProfileResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit PostAgentProfileResponsePrivate(PostAgentProfileResponse * const q);

    void parsePostAgentProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostAgentProfileResponse)
    Q_DISABLE_COPY(PostAgentProfileResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
