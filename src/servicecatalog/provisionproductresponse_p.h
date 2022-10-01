// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPRODUCTRESPONSE_P_H
#define QTAWS_PROVISIONPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ProvisionProductResponse;

class ProvisionProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ProvisionProductResponsePrivate(ProvisionProductResponse * const q);

    void parseProvisionProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionProductResponse)
    Q_DISABLE_COPY(ProvisionProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
