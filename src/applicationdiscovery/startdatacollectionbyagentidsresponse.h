// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATACOLLECTIONBYAGENTIDSRESPONSE_H
#define QTAWS_STARTDATACOLLECTIONBYAGENTIDSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "startdatacollectionbyagentidsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartDataCollectionByAgentIdsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartDataCollectionByAgentIdsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    StartDataCollectionByAgentIdsResponse(const StartDataCollectionByAgentIdsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDataCollectionByAgentIdsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataCollectionByAgentIdsResponse)
    Q_DISABLE_COPY(StartDataCollectionByAgentIdsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
