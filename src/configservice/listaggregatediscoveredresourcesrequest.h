// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_H
#define QTAWS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class ListAggregateDiscoveredResourcesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT ListAggregateDiscoveredResourcesRequest : public ConfigServiceRequest {

public:
    ListAggregateDiscoveredResourcesRequest(const ListAggregateDiscoveredResourcesRequest &other);
    ListAggregateDiscoveredResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAggregateDiscoveredResourcesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
