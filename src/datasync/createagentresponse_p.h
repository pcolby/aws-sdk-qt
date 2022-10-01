// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTRESPONSE_P_H
#define QTAWS_CREATEAGENTRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateAgentResponse;

class CreateAgentResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateAgentResponsePrivate(CreateAgentResponse * const q);

    void parseCreateAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAgentResponse)
    Q_DISABLE_COPY(CreateAgentResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
