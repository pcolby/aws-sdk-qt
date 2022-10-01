// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_H
#define QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_H

#include "configserviceresponse.h"
#include "listaggregatediscoveredresourcesrequest.h"

namespace QtAws {
namespace ConfigService {

class ListAggregateDiscoveredResourcesResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT ListAggregateDiscoveredResourcesResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    ListAggregateDiscoveredResourcesResponse(const ListAggregateDiscoveredResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAggregateDiscoveredResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAggregateDiscoveredResourcesResponse)
    Q_DISABLE_COPY(ListAggregateDiscoveredResourcesResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
