// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKHEARTBEATRESPONSE_P_H
#define QTAWS_SENDTASKHEARTBEATRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class SendTaskHeartbeatResponse;

class SendTaskHeartbeatResponsePrivate : public SfnResponsePrivate {

public:

    explicit SendTaskHeartbeatResponsePrivate(SendTaskHeartbeatResponse * const q);

    void parseSendTaskHeartbeatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTaskHeartbeatResponse)
    Q_DISABLE_COPY(SendTaskHeartbeatResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
