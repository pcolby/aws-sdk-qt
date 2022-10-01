// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEATTRIBUTEGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEATTRIBUTEGROUPRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateAttributeGroupResponse;

class DisassociateAttributeGroupResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit DisassociateAttributeGroupResponsePrivate(DisassociateAttributeGroupResponse * const q);

    void parseDisassociateAttributeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAttributeGroupResponse)
    Q_DISABLE_COPY(DisassociateAttributeGroupResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
