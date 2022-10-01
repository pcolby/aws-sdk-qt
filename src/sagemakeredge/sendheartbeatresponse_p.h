// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDHEARTBEATRESPONSE_P_H
#define QTAWS_SENDHEARTBEATRESPONSE_P_H

#include "sagemakeredgeresponse_p.h"

namespace QtAws {
namespace SagemakerEdge {

class SendHeartbeatResponse;

class SendHeartbeatResponsePrivate : public SagemakerEdgeResponsePrivate {

public:

    explicit SendHeartbeatResponsePrivate(SendHeartbeatResponse * const q);

    void parseSendHeartbeatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendHeartbeatResponse)
    Q_DISABLE_COPY(SendHeartbeatResponsePrivate)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
