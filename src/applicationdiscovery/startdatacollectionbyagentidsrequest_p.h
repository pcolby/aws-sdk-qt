// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATACOLLECTIONBYAGENTIDSREQUEST_P_H
#define QTAWS_STARTDATACOLLECTIONBYAGENTIDSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "startdatacollectionbyagentidsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartDataCollectionByAgentIdsRequest;

class StartDataCollectionByAgentIdsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StartDataCollectionByAgentIdsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StartDataCollectionByAgentIdsRequest * const q);
    StartDataCollectionByAgentIdsRequestPrivate(const StartDataCollectionByAgentIdsRequestPrivate &other,
                                   StartDataCollectionByAgentIdsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDataCollectionByAgentIdsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
