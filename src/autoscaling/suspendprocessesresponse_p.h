// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDPROCESSESRESPONSE_P_H
#define QTAWS_SUSPENDPROCESSESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class SuspendProcessesResponse;

class SuspendProcessesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit SuspendProcessesResponsePrivate(SuspendProcessesResponse * const q);

    void parseSuspendProcessesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SuspendProcessesResponse)
    Q_DISABLE_COPY(SuspendProcessesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
