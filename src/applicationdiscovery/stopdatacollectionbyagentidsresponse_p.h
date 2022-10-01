// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATACOLLECTIONBYAGENTIDSRESPONSE_P_H
#define QTAWS_STOPDATACOLLECTIONBYAGENTIDSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopDataCollectionByAgentIdsResponse;

class StopDataCollectionByAgentIdsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit StopDataCollectionByAgentIdsResponsePrivate(StopDataCollectionByAgentIdsResponse * const q);

    void parseStopDataCollectionByAgentIdsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopDataCollectionByAgentIdsResponse)
    Q_DISABLE_COPY(StopDataCollectionByAgentIdsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
