// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_CREATEATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class CreateAttributeGroupResponse;

class CreateAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit CreateAttributeGroupResponsePrivate(CreateAttributeGroupResponse * const q);

    void parseCreateAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAttributeGroupResponse)
    Q_DISABLE_COPY(CreateAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
