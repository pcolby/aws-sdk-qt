// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATACOLLECTIONBYAGENTIDSREQUEST_H
#define QTAWS_STARTDATACOLLECTIONBYAGENTIDSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartDataCollectionByAgentIdsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT StartDataCollectionByAgentIdsRequest : public ApplicationDiscoveryRequest {

public:
    StartDataCollectionByAgentIdsRequest(const StartDataCollectionByAgentIdsRequest &other);
    StartDataCollectionByAgentIdsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataCollectionByAgentIdsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
