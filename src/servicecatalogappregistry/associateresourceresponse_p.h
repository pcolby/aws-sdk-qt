// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCERESPONSE_P_H
#define QTAWS_ASSOCIATERESOURCERESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class AssociateResourceResponse;

class AssociateResourceResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit AssociateResourceResponsePrivate(AssociateResourceResponse * const q);

    void parseAssociateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResourceResponse)
    Q_DISABLE_COPY(AssociateResourceResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
