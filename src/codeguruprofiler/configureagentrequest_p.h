// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGUREAGENTREQUEST_P_H
#define QTAWS_CONFIGUREAGENTREQUEST_P_H

#include "codeguruprofilerrequest_p.h"
#include "configureagentrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ConfigureAgentRequest;

class ConfigureAgentRequestPrivate : public CodeGuruProfilerRequestPrivate {

public:
    ConfigureAgentRequestPrivate(const CodeGuruProfilerRequest::Action action,
                                   ConfigureAgentRequest * const q);
    ConfigureAgentRequestPrivate(const ConfigureAgentRequestPrivate &other,
                                   ConfigureAgentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfigureAgentRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
