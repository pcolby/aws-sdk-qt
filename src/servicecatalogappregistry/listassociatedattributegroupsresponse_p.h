// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDATTRIBUTEGROUPSRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAssociatedAttributeGroupsResponse;

class ListAssociatedAttributeGroupsResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit ListAssociatedAttributeGroupsResponsePrivate(ListAssociatedAttributeGroupsResponse * const q);

    void parseListAssociatedAttributeGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedAttributeGroupsResponse)
    Q_DISABLE_COPY(ListAssociatedAttributeGroupsResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
