// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROVISIONEDPRODUCTOUTPUTSRESPONSE_P_H
#define QTAWS_GETPROVISIONEDPRODUCTOUTPUTSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class GetProvisionedProductOutputsResponse;

class GetProvisionedProductOutputsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit GetProvisionedProductOutputsResponsePrivate(GetProvisionedProductOutputsResponse * const q);

    void parseGetProvisionedProductOutputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProvisionedProductOutputsResponse)
    Q_DISABLE_COPY(GetProvisionedProductOutputsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
