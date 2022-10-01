// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCERESPONSE_P_H
#define QTAWS_DISASSOCIATERESOURCERESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DisassociateResourceResponse;

class DisassociateResourceResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit DisassociateResourceResponsePrivate(DisassociateResourceResponse * const q);

    void parseDisassociateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceResponse)
    Q_DISABLE_COPY(DisassociateResourceResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
