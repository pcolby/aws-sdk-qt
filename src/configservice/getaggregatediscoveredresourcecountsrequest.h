// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_H
#define QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateDiscoveredResourceCountsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateDiscoveredResourceCountsRequest : public ConfigServiceRequest {

public:
    GetAggregateDiscoveredResourceCountsRequest(const GetAggregateDiscoveredResourceCountsRequest &other);
    GetAggregateDiscoveredResourceCountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateDiscoveredResourceCountsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
