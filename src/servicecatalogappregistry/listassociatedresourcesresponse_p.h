// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDRESOURCESRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDRESOURCESRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedResourcesResponse;

class ListAssociatedResourcesResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit ListAssociatedResourcesResponsePrivate(ListAssociatedResourcesResponse * const q);

    void parseListAssociatedResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedResourcesResponse)
    Q_DISABLE_COPY(ListAssociatedResourcesResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
