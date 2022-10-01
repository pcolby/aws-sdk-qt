// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONRESPONSE_P_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductServiceActionResponse;

class ExecuteProvisionedProductServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ExecuteProvisionedProductServiceActionResponsePrivate(ExecuteProvisionedProductServiceActionResponse * const q);

    void parseExecuteProvisionedProductServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteProvisionedProductServiceActionResponse)
    Q_DISABLE_COPY(ExecuteProvisionedProductServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
