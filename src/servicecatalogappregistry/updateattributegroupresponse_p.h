// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_UPDATEATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateAttributeGroupResponse;

class UpdateAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit UpdateAttributeGroupResponsePrivate(UpdateAttributeGroupResponse * const q);

    void parseUpdateAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAttributeGroupResponse)
    Q_DISABLE_COPY(UpdateAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
