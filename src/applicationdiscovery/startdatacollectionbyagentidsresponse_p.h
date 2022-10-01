// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATACOLLECTIONBYAGENTIDSRESPONSE_P_H
#define QTAWS_STARTDATACOLLECTIONBYAGENTIDSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartDataCollectionByAgentIdsResponse;

class StartDataCollectionByAgentIdsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit StartDataCollectionByAgentIdsResponsePrivate(StartDataCollectionByAgentIdsResponse * const q);

    void parseStartDataCollectionByAgentIdsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDataCollectionByAgentIdsResponse)
    Q_DISABLE_COPY(StartDataCollectionByAgentIdsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
