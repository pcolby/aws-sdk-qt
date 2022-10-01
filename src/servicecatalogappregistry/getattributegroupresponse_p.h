// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_GETATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAttributeGroupResponse;

class GetAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit GetAttributeGroupResponsePrivate(GetAttributeGroupResponse * const q);

    void parseGetAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAttributeGroupResponse)
    Q_DISABLE_COPY(GetAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
