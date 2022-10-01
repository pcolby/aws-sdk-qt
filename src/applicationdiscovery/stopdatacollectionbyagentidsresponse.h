// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATACOLLECTIONBYAGENTIDSRESPONSE_H
#define QTAWS_STOPDATACOLLECTIONBYAGENTIDSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "stopdatacollectionbyagentidsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopDataCollectionByAgentIdsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StopDataCollectionByAgentIdsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StopDataCollectionByAgentIdsResponse(const StopDataCollectionByAgentIdsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDataCollectionByAgentIdsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDataCollectionByAgentIdsResponse)
    Q_DISABLE_COPY(StopDataCollectionByAgentIdsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
