// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGENTRESPONSE_P_H
#define QTAWS_DELETEAGENTRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DeleteAgentResponse;

class DeleteAgentResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DeleteAgentResponsePrivate(DeleteAgentResponse * const q);

    void parseDeleteAgentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAgentResponse)
    Q_DISABLE_COPY(DeleteAgentResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
