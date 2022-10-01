// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTRESPONSE_P_H
#define QTAWS_UPDATEAGENTRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class UpdateAgentResponse;

class UpdateAgentResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit UpdateAgentResponsePrivate(UpdateAgentResponse * const q);

    void parseUpdateAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAgentResponse)
    Q_DISABLE_COPY(UpdateAgentResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
