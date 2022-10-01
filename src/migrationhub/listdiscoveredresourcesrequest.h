// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVEREDRESOURCESREQUEST_H
#define QTAWS_LISTDISCOVEREDRESOURCESREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListDiscoveredResourcesRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ListDiscoveredResourcesRequest : public MigrationHubRequest {

public:
    ListDiscoveredResourcesRequest(const ListDiscoveredResourcesRequest &other);
    ListDiscoveredResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDiscoveredResourcesRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
