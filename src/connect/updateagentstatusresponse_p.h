// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTSTATUSRESPONSE_P_H
#define QTAWS_UPDATEAGENTSTATUSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateAgentStatusResponse;

class UpdateAgentStatusResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateAgentStatusResponsePrivate(UpdateAgentStatusResponse * const q);

    void parseUpdateAgentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAgentStatusResponse)
    Q_DISABLE_COPY(UpdateAgentStatusResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
