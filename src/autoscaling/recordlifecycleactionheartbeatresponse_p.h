// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDLIFECYCLEACTIONHEARTBEATRESPONSE_P_H
#define QTAWS_RECORDLIFECYCLEACTIONHEARTBEATRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class RecordLifecycleActionHeartbeatResponse;

class RecordLifecycleActionHeartbeatResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit RecordLifecycleActionHeartbeatResponsePrivate(RecordLifecycleActionHeartbeatResponse * const q);

    void parseRecordLifecycleActionHeartbeatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecordLifecycleActionHeartbeatResponse)
    Q_DISABLE_COPY(RecordLifecycleActionHeartbeatResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
