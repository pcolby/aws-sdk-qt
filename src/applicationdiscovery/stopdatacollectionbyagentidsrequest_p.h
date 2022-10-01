// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATACOLLECTIONBYAGENTIDSREQUEST_P_H
#define QTAWS_STOPDATACOLLECTIONBYAGENTIDSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "stopdatacollectionbyagentidsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopDataCollectionByAgentIdsRequest;

class StopDataCollectionByAgentIdsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StopDataCollectionByAgentIdsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StopDataCollectionByAgentIdsRequest * const q);
    StopDataCollectionByAgentIdsRequestPrivate(const StopDataCollectionByAgentIdsRequestPrivate &other,
                                   StopDataCollectionByAgentIdsRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDataCollectionByAgentIdsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
