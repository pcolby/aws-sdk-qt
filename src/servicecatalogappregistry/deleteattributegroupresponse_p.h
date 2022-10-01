// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_DELETEATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DeleteAttributeGroupResponse;

class DeleteAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit DeleteAttributeGroupResponsePrivate(DeleteAttributeGroupResponse * const q);

    void parseDeleteAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAttributeGroupResponse)
    Q_DISABLE_COPY(DeleteAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
