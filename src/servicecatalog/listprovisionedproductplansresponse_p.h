// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROVISIONEDPRODUCTPLANSRESPONSE_P_H
#define QTAWS_LISTPROVISIONEDPRODUCTPLANSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListProvisionedProductPlansResponse;

class ListProvisionedProductPlansResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListProvisionedProductPlansResponsePrivate(ListProvisionedProductPlansResponse * const q);

    void parseListProvisionedProductPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProvisionedProductPlansResponse)
    Q_DISABLE_COPY(ListProvisionedProductPlansResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
