// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEPROVISIONEDPRODUCTRESPONSE_P_H
#define QTAWS_TERMINATEPROVISIONEDPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class TerminateProvisionedProductResponse;

class TerminateProvisionedProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit TerminateProvisionedProductResponsePrivate(TerminateProvisionedProductResponse * const q);

    void parseTerminateProvisionedProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateProvisionedProductResponse)
    Q_DISABLE_COPY(TerminateProvisionedProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
