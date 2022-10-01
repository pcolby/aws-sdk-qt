// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREAGENTRESPONSE_P_H
#define QTAWS_CONFIGUREAGENTRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ConfigureAgentResponse;

class ConfigureAgentResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit ConfigureAgentResponsePrivate(ConfigureAgentResponse * const q);

    void parseConfigureAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ConfigureAgentResponse)
    Q_DISABLE_COPY(ConfigureAgentResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
