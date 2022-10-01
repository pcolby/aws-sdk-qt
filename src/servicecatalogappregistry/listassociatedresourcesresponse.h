// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDRESOURCESRESPONSE_H
#define QTAWS_LISTASSOCIATEDRESOURCESRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "listassociatedresourcesrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedResourcesResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAssociatedResourcesResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    ListAssociatedResourcesResponse(const ListAssociatedResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociatedResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedResourcesResponse)
    Q_DISABLE_COPY(ListAssociatedResourcesResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
