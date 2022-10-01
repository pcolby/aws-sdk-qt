// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRODUCTRESPONSE_P_H
#define QTAWS_DELETEPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProductResponse;

class DeleteProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteProductResponsePrivate(DeleteProductResponse * const q);

    void parseDeleteProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProductResponse)
    Q_DISABLE_COPY(DeleteProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
