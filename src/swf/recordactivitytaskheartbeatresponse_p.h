// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDACTIVITYTASKHEARTBEATRESPONSE_P_H
#define QTAWS_RECORDACTIVITYTASKHEARTBEATRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RecordActivityTaskHeartbeatResponse;

class RecordActivityTaskHeartbeatResponsePrivate : public SwfResponsePrivate {

public:

    explicit RecordActivityTaskHeartbeatResponsePrivate(RecordActivityTaskHeartbeatResponse * const q);

    void parseRecordActivityTaskHeartbeatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RecordActivityTaskHeartbeatResponse)
    Q_DISABLE_COPY(RecordActivityTaskHeartbeatResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
