// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSRESPONSE_H
#define QTAWS_GETAGGREGATEDISCOVEREDRESOURCECOUNTSRESPONSE_H

#include "configserviceresponse.h"
#include "getaggregatediscoveredresourcecountsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateDiscoveredResourceCountsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateDiscoveredResourceCountsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetAggregateDiscoveredResourceCountsResponse(const GetAggregateDiscoveredResourceCountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAggregateDiscoveredResourceCountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateDiscoveredResourceCountsResponse)
    Q_DISABLE_COPY(GetAggregateDiscoveredResourceCountsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
