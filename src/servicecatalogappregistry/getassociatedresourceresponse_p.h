// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDRESOURCERESPONSE_P_H
#define QTAWS_GETASSOCIATEDRESOURCERESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class GetAssociatedResourceResponse;

class GetAssociatedResourceResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit GetAssociatedResourceResponsePrivate(GetAssociatedResourceResponse * const q);

    void parseGetAssociatedResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAssociatedResourceResponse)
    Q_DISABLE_COPY(GetAssociatedResourceResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
