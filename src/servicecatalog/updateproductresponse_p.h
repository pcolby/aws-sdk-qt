// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRODUCTRESPONSE_P_H
#define QTAWS_UPDATEPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateProductResponse;

class UpdateProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateProductResponsePrivate(UpdateProductResponse * const q);

    void parseUpdateProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProductResponse)
    Q_DISABLE_COPY(UpdateProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
