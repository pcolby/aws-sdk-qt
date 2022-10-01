// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateAttributeGroupResponse;

class AssociateAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit AssociateAttributeGroupResponsePrivate(AssociateAttributeGroupResponse * const q);

    void parseAssociateAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAttributeGroupResponse)
    Q_DISABLE_COPY(AssociateAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
