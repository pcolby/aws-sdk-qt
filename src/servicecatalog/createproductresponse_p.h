// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRODUCTRESPONSE_P_H
#define QTAWS_CREATEPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateProductResponse;

class CreateProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateProductResponsePrivate(CreateProductResponse * const q);

    void parseCreateProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProductResponse)
    Q_DISABLE_COPY(CreateProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
