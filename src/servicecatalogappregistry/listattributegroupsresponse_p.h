// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSRESPONSE_P_H
#define QTAWS_LISTATTRIBUTEGROUPSRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsResponse;

class ListAttributeGroupsResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit ListAttributeGroupsResponsePrivate(ListAttributeGroupsResponse * const q);

    void parseListAttributeGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttributeGroupsResponse)
    Q_DISABLE_COPY(ListAttributeGroupsResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
