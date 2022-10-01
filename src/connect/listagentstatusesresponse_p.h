// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGENTSTATUSESRESPONSE_P_H
#define QTAWS_LISTAGENTSTATUSESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListAgentStatusesResponse;

class ListAgentStatusesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListAgentStatusesResponsePrivate(ListAgentStatusesResponse * const q);

    void parseListAgentStatusesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAgentStatusesResponse)
    Q_DISABLE_COPY(ListAgentStatusesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
