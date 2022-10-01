// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTSTATUSRESPONSE_P_H
#define QTAWS_CREATEAGENTSTATUSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateAgentStatusResponse;

class CreateAgentStatusResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateAgentStatusResponsePrivate(CreateAgentStatusResponse * const q);

    void parseCreateAgentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAgentStatusResponse)
    Q_DISABLE_COPY(CreateAgentStatusResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
