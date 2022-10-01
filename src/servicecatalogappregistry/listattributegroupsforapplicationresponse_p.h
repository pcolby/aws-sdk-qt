// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONRESPONSE_P_H
#define QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsForApplicationResponse;

class ListAttributeGroupsForApplicationResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit ListAttributeGroupsForApplicationResponsePrivate(ListAttributeGroupsForApplicationResponse * const q);

    void parseListAttributeGroupsForApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttributeGroupsForApplicationResponse)
    Q_DISABLE_COPY(ListAttributeGroupsForApplicationResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
