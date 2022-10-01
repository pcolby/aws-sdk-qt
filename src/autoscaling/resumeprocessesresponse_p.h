// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEPROCESSESRESPONSE_P_H
#define QTAWS_RESUMEPROCESSESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class ResumeProcessesResponse;

class ResumeProcessesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit ResumeProcessesResponsePrivate(ResumeProcessesResponse * const q);

    void parseResumeProcessesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeProcessesResponse)
    Q_DISABLE_COPY(ResumeProcessesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
