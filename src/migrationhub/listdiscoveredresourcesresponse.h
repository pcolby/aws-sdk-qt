// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_H
#define QTAWS_LISTDISCOVEREDRESOURCESRESPONSE_H

#include "migrationhubresponse.h"
#include "listdiscoveredresourcesrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListDiscoveredResourcesResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ListDiscoveredResourcesResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ListDiscoveredResourcesResponse(const ListDiscoveredResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDiscoveredResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDiscoveredResourcesResponse)
    Q_DISABLE_COPY(ListDiscoveredResourcesResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
